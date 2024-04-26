import java.util.ArrayList;

public class BoundedGrid implements Grid
{
	private String[][] board;

	//----------------------------------------------------------------------------
	public BoundedGrid(int size)
	{
		board = new String[size][size];
	}
	//----------------------------------------------------------------------------
	//Precondition:
	//Postcondition: Returns the number of rows in this grid.
	public int getNumRows()
	{
		return board.length;
	}

	//----------------------------------------------------------------------------
	//Precondition:
	//Postcondition: Returns the number of columns in this grid.
	public int getNumCols()
	{
		return board[0].length;
	}

	//----------------------------------------------------------------------------
	//Precondition:  loc is not null
	//Postcondition: Returns true if loc is valid in this grid, false otherwise
	public boolean isValid(Location loc)
	{
		if (loc.getRow() < getNumRows() && loc.getRow() >= 0 && loc.getCol() < getNumCols() && loc.getCol() >= 0)
			return true;
		else
			return false;
	}
	//----------------------------------------------------------------------------
	//Precondition:  (1) loc is valid in this grid
	//				 (2) theColor is not null
	//Postcondition:  Puts the String object at loc.
	//				  Returns the object previously at that location.
	public String put(Location loc, String theColor)
	{
		String holder = board[loc.getRow()][loc.getCol()];
		
		board[loc.getRow()][loc.getCol()] = theColor;
		
		return holder;
	}
	//----------------------------------------------------------------------------
	//Precondition:  (1) loc is valid in this grid
    //Postcondition: Removes the object at loc.
    //				 returns the object that was removed or null if the location is unoccupied
    public String remove(Location loc)
    {
    	String holder = board[loc.getRow()][loc.getCol()];
		
		board[loc.getRow()][loc.getCol()] = null;
		
		return holder;
    }

	//----------------------------------------------------------------------------
	//Precondition:  loc is valid in this grid
	//Postcondition: Returns the String at loc or null if the location is unoccupied.
	public String get(Location loc)
	{
		return board[loc.getRow()][loc.getCol()];
	}
	//----------------------------------------------------------------------------
	//Precondition:
	//Postcondition:  returns an ArrayList of all occupied locations in this grid
    public ArrayList<Location> getOccupiedLocs()
	{
    	ArrayList <Location> array = new ArrayList <Location>();
    	
    	for(int i = 0; i < getNumRows(); i++) 
    	{
    		for(int j = 0; j < getNumCols(); j++)
    		{
    			if(board[i][j] != null)
        			array.add(new Location(i, j));
    		}
    	}
    	return array;
	}

	//----------------------------------------------------------------------------
	//Precondition:  loc is valid in this grid
	//Postcondition: returns an ArrayList of valid locations adjacent to loc in
	//				 all eight compass directions (north, northeast, east, southeast,
	//				 south, southwest,west, and northwest).
	public ArrayList<Location> getValidAdjacentLocations(Location loc)
    {
		ArrayList <Location> array = new ArrayList <Location>();
		
		
		if(isValid(loc.getAdjacentLoc(Location.NORTH)))
			array.add(loc.getAdjacentLoc(Location.NORTH));
		
		if(isValid(loc.getAdjacentLoc(Location.SOUTH)))
			array.add(loc.getAdjacentLoc(Location.SOUTH));
		
		if(isValid(loc.getAdjacentLoc(Location.EAST)))
			array.add(loc.getAdjacentLoc(Location.EAST));
		
		if(isValid(loc.getAdjacentLoc(Location.WEST)))
			array.add(loc.getAdjacentLoc(Location.WEST));
		
		if(isValid(loc.getAdjacentLoc(Location.NORTHEAST)))
			array.add(loc.getAdjacentLoc(Location.NORTHEAST));
		
		if(isValid(loc.getAdjacentLoc(Location.NORTHWEST)))
			array.add(loc.getAdjacentLoc(Location.NORTHWEST));
		
		if(isValid(loc.getAdjacentLoc(Location.SOUTHEAST)))
			array.add(loc.getAdjacentLoc(Location.SOUTHEAST));
		
		if(isValid(loc.getAdjacentLoc(Location.SOUTHWEST)))
			array.add(loc.getAdjacentLoc(Location.SOUTHWEST));
			
    	return array;
    }

	//----------------------------------------------------------------------------

    //Precondition:  loc is valid in this grid
	//Postcondition: returns an ArrayList of valid empty locations adjacent to loc
	//				 in all eight compass directions (north, northeast, east,
	//				 southeast, south, southwest, west, and northwest).
    public ArrayList<Location> getEmptyAdjacentLocations(Location loc)
    {
    	ArrayList <Location> array = new ArrayList <Location>();
    	ArrayList <Location> array2 = new ArrayList <Location>();
    	
    	array = getValidAdjacentLocations(loc);
    	array2 = getOccupiedLocs();
    	
    	for(int i = 0; i < array2.size(); i++)
    	{
    		for(int j = 0; j < array.size(); j++)
    		{
    			if(array.get(j).equals(array2.get(i)))
    			{
    				array.remove(j);
    			}
    		}
    	}
    	return array;
    }


	//----------------------------------------------------------------------------
	//Precondition:	  loc is valid in this grid
	//Postcondition:  returns an ArrayList of valid occupied locations adjacent to
	//				  loc in all eight compass directions (north, northeast, east,
	//				  southeast, south, southwest, west, and northwest).
   	public ArrayList<Location> getOccupiedAdjacentLocs(Location loc)
	{

   		ArrayList <Location> array = new ArrayList <Location>();
    	ArrayList <Location> array2 = new ArrayList <Location>();
    	ArrayList <Location> array3 = new ArrayList <Location>();
    	
    	array = getValidAdjacentLocations(loc);
    	array2 = getOccupiedLocs();
    	
    	for(int i = 0; i < array2.size(); i++)
    	{
    		for(int j = 0; j < array.size(); j++)
    		{
    			if(array.get(j).equals(array2.get(i)))
    			{
    				array3.add(array2.get(i));
    			}
    		}
    	}
    	
    	return array3;
    }
	//----------------------------------------------------------------------------
	//Postcondition: displays the board and its values onto the screen.
	public void display()
	{
		System.out.println();
		System.out.print(String.format("%4s", " "));
		for (int i = 0; i < board[0].length; i++)
			System.out.print(String.format("%4d", i));

		System.out.println("\n");

		for (int i = 0; i < board.length; i++)
		{
			System.out.print(String.format("%4d", i));
			for (int j = 0; j < board[0].length; j++)
			{
				if (board[i][j] != null)
					System.out.print(String.format("%4s", board[i][j]));
				else
					System.out.print(String.format("%4s", "."));
			}
			System.out.println("\n");
		}

		System.out.println();
	}

	//----------------------------------------------------------------------------
}