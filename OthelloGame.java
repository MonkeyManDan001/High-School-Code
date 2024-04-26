import java.util.ArrayList;
import java.util.Scanner;

public class OthelloGame
{
	private OthelloPlayer humanPlayer;		//human Othello player
	private OthelloPlayer compPlayer;		//computer Othello player
	private Grid board;						//board

	//----------------------------------------------------------------------------------
	public OthelloGame()
	{
		board = new BoundedGrid(4);

		humanPlayer = new HumanOthelloPlayer("Human","B");
		
        compPlayer = new StupidComputerPlayer("Computer","W");

		initializeBoard();
	}
	//----------------------------------------------------------------------------------
	//Description:  This method places the "B"'s and "W"'s in the appropriate 
	// 				place on the game board. Pretend you don't know the size of 
	// 				the board - i.e. write generically.

	//Postcondition: "B"'s and "W"'s are placed in the appropriate place on the
	//				 board.

	private void initializeBoard()
	{
		board.put(new Location(board.getNumRows()/2,board.getNumCols()/2), "B");
		board.put(new Location(board.getNumRows()/2-1,board.getNumCols()/2-1), "B");
		board.put(new Location(board.getNumRows()/2,board.getNumCols()/2-1), "W");
		board.put(new Location(board.getNumRows()/2-1,board.getNumCols()/2), "W");
	}
	//----------------------------------------------------------------------------------
	/*
	The playGame method (below) has the players alternate moves until the board is filled or both
	players have no valid moves.  A winner is then declared.

	When it's the human's turn, all valid moves are displayed on the screen.  If there are valid
	moves, the human is asked for a move (in another method).  The move is made and the board is
	reconfigured according to the rules of the game.  If there are no valid moves, display a message
	stating there are no valid moves. Switch the player.

	When it's the computer's turn, all valid moves are displayed on the screen.  If there are valid
	moves, a random move is selected (not in this method).   The move is made and the board is
	reconfigured according to the rules of the game.  If there are no valid moves display a message
	stating there are no valid moves. Switch the player.

	This method calls other methods to help do its job.
	*/

	public void playGame()
	{   
		int humanCount = 0;
		int compCount = 0;
		Scanner scannerObj = new Scanner(System.in);
				
		while((board.getOccupiedLocs().size() != (board.getNumRows() * board.getNumCols())) && (getValidMoves(humanPlayer.getColor()).size() > 0 || getValidMoves(compPlayer.getColor()).size() > 0 ))
		{	
			board.display();
			
			if (getValidMoves(compPlayer.getColor()).size() > 0) 
			{
				Location computerMove = compPlayer.getMove(getValidMoves(compPlayer.getColor()));
				
				System.out.println("\nMOVING TO: "+ computerMove);
				
				updateBoard(computerMove, compPlayer.getColor());
				
				board.display();
			}
			else
			{
				System.out.println(compPlayer.getName() + " has no valid moves left.");
			}
			
			if (getValidMoves(humanPlayer.getColor()).size() > 0) 
			{
				Location hMove = humanPlayer.getMove(getValidMoves(humanPlayer.getColor()));
				
				System.out.println("\nMOVING TO: "+ hMove);
				
				updateBoard(hMove, humanPlayer.getColor());
				
				board.display();
			}
			else
			{
				System.out.println(humanPlayer.getName() + " has no valid moves left.");
			}
		}        
			for (int r = 0; r < board.getNumRows(); r++)
			{
				for (int c = 0; c < board.getNumCols(); c++)
				{
					String occCol = board.get(new Location(r, c));
				
					if(occCol != null)
					{
						if (occCol.equals(humanPlayer.getColor()))
						{
							humanCount++;
						}
						if (occCol.equals(compPlayer.getColor()))
						{ 
							compCount++;
						}
					}
				}
			}
            
		if (compCount == humanCount)
			System.out.println("The game ends in a Tie.");
		else if (compCount > humanCount)
			System.out.println(compPlayer.getName() + " has won!");
		else
			System.out.println(humanPlayer.getName() + " wins!"); 
    }

	
	//----------------------------------------------------------------------------------
	public ArrayList<Location> getValidMoves(String curColor)
	{
		ArrayList <Location> occLocs = new ArrayList <Location>();
		ArrayList <Location> adjLocs = new ArrayList <Location>();
		ArrayList <Location> valLocs = new ArrayList <Location>();
		
		occLocs = board.getOccupiedLocs();
		
		for(int i = 0; i < occLocs.size(); i++)
		{
			if(board.get(occLocs.get(i)).equals(curColor))
			{
				adjLocs.add(occLocs.get(i));
			}
		}
		
		for(int i = 0; i < adjLocs.size(); i++)
		{
			occLocs = board.getOccupiedAdjacentLocs(adjLocs.get(i));
			
			for(int j = 0; j < occLocs.size(); j++) 
			{	
				if(!(board.get(occLocs.get(j)).equals(curColor)))
				{
					int direction = adjLocs.get(i).getDirectionToward(occLocs.get(j));
					
					Location loc = adjLocs.get(i).getAdjacentLoc(direction);
					
					for(int k = 0; k < board.getNumRows(); k++)
					{
						if(board.get(loc) == null)
						{
							valLocs.add(loc);
							k = board.getNumRows();
						}
						else if(board.get(loc).equals(curColor))
						{
							k = board.getNumRows();
						}
						
						if(board.isValid(loc.getAdjacentLoc(direction)))
						{
							loc = loc.getAdjacentLoc(direction);
						}
					}
				}
			}
		}
		
		for(int i = 0; i < valLocs.size(); i++)
		{
			for(int j = i + 1; j < valLocs.size(); j++)
			{
				if(valLocs.get(i).equals(valLocs.get(j)))
				{
					valLocs.remove(j);
					j--;
				}
			}
		}
		
		return valLocs;
	}
	//----------------------------------------------------------------------------------

	public void updateBoard(Location nextMove, String targetString)
	{
		board.put(nextMove, targetString);
		
		ArrayList <Location> occLocs = new ArrayList <Location>();
		ArrayList <Location> flipLocs = new ArrayList <Location>();
		
		occLocs = board.getOccupiedAdjacentLocs(nextMove);
		
		for(int i = 0; i < occLocs.size(); i++)
		{
			int direction = nextMove.getDirectionToward(occLocs.get(i));
			Location loc = nextMove.getAdjacentLoc(direction);
			
			for(int j = 0; j < board.getNumRows(); j++)
			{
				if(board.get(loc) != null)
				{
					if(!(board.get(loc).equals(targetString)))
					{
						flipLocs.add(loc);
						loc = loc.getAdjacentLoc(direction);
					}
				}
			}
		}
		
		for(int i = 0; i < flipLocs.size(); i++)
		{
			board.put(flipLocs.get(i), targetString);
		}
	}
	
}