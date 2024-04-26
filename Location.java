public class Location
{
	private int row;
	private int col;

	//COMPASS DIRECTIONS
	public static final int NORTH = 0;
	public static final int EAST = 90;
	public static final int SOUTH = 180;
	public static final int WEST = 270;
	public static final int NORTHEAST = 45;
	public static final int SOUTHEAST = 135;
	public static final int SOUTHWEST = 225;
	public static final int NORTHWEST = 315;

	public Location(int inRow, int inCol)
	{
		row = inRow;
		col = inCol;
	}


	//----------------------------------------------------------------------
	//Description:  Gets the row coordinate.
	//Postcondition:  returns the row of this location

	public int getRow()
	{
		return row;
	}


	//----------------------------------------------------------------------
	//Description:  Gets the column coordinate.
	//Postcondition: returns the column for this Location
	public int getCol()
	{
		return col;
	}


	//----------------------------------------------------------------------
	//Description:  Gets the adjacent location in any one of the eight
	//			    compass directions.
	//			    It is possible to return a Location that is out of bounds.
	//Precondition:  dir is one of the 8 compass directions.
	//Postcondition: returns the adjacent location in the direction that is closest to dir
	public Location getAdjacentLoc(int dir)
	{
		int row1 = row;
		int col1 = col;
		
		if (dir == NORTH)
			row1--;
		
		if (dir == SOUTH)
			row1++;
		
		if (dir == EAST)
			col1++;
		
		if (dir == WEST)
			col1--;
		
		if (dir == NORTHEAST)
		{
			row1--;
			col1++;
		}
		
		if (dir == NORTHWEST)
		{
			row1--;
			col1--;
		}
		
		if (dir == SOUTHEAST)
		{
			row1++;
			col1++;
		}
		
		if (dir == SOUTHWEST)
		{
			row1++;
			col1--;
		}
		
		return new Location(row1, col1);
	}


	//----------------------------------------------------------------------
	//Description: Returns the direction from this location toward another
	//             location. The direction is one of the eight compass
	//             directions.
	//Precondition:  target - a location that is different from this location.
	//			 	 target is an adjacent Location.
	//				 target is valid in the matrix
	//Postcondition: returns the closest compass direction from this location
	//				 toward target
	public int getDirectionToward(Location target)
	{
		Location curLoc = new Location(row,col);
		
		if (target.equals(curLoc.getAdjacentLoc(NORTH)))
			return NORTH;
		else if (target.equals(curLoc.getAdjacentLoc(SOUTH)))
			return SOUTH;
		else if (target.equals(curLoc.getAdjacentLoc(EAST)))
			return EAST;
		else if (target.equals(curLoc.getAdjacentLoc(WEST)))
			return WEST;
		else if (target.equals(curLoc.getAdjacentLoc(NORTHEAST)))
			return NORTHEAST;
		else if (target.equals(curLoc.getAdjacentLoc(NORTHWEST)))
			return NORTHWEST;
		else if (target.equals(curLoc.getAdjacentLoc(SOUTHEAST)))
			return SOUTHEAST;
		else
			return SOUTHWEST;
	}


	//----------------------------------------------------------------------
	//override .equals method
	//Description: Determines if this Location is equal to otherLoc
	//Precondition: otherLoc is a Location object and is valid in the matrix
	//Postcondition: return true if otherLoc is a Location with the same row
	//               and column as this location; false otherwise.
	public boolean equals(Object otherLoc)
	{
		boolean row1 = false;
		boolean col1 = false;
		
		if (row == ((Location) otherLoc).getRow())
			row1 = true;
		if (col == ((Location) otherLoc).getCol())
			col1 = true;
		
		if (row1 == true && col1 == true)
			return true;
		else
			return false;
	}


	//----------------------------------------------------------------------
	//Postcondition: returns a String with the row and col of this location
	//				 in the format: (row, col)
	public String toString()
	{
		String out = "(" + row + ", " + col + ")";
		return out;
	}

}