import java.util.ArrayList;
import java.util.Scanner;

public class HumanOthelloPlayer extends OthelloPlayer 
{
    public HumanOthelloPlayer(String inName, String inColor) 
    {
        super(inName, inColor);
    }

    public Location getMove(ArrayList<Location> valLocs)
    {
        int row = 0;
        int col = 0;
        boolean turn = false;
        Scanner inputReader = new Scanner(System.in);

        System.out.println(getName() + " - your turn.");
        System.out.println("validMoves: " + valLocs);

        while(turn == false)
        {
            System.out.print("Enter row: ");
            row = inputReader.nextInt();

            System.out.print("Enter col: ");
            col = inputReader.nextInt();

            if (row < 0 || col < 0)
            {
                System.out.println("Invalid move. Please re-enter:");
            }
            else 
            {
                for (int i = 0; i < valLocs.size(); i++)
                {
                	Location playerMove = new Location(row, col);
                	
                	if (playerMove.equals(valLocs.get(i)))
                    {
                         turn = true;
                         return (valLocs.get(i));
                     }
                 }

                 if (turn == false)
                 {
                     System.out.println("Invalid move. Please re-enter:");
                 }
            }
        }
        
        return null;
    }
}