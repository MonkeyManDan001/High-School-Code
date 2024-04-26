//Dan Mine Period 1
public class MyMatrixStack implements Stack
{
	private String theList[][];
	private int rowTopOfStack;
	private int colTopOfStack;
	private static final int ROWNUMBER = 1;
	private static final int COLNUMBER = 3;
	
	public MyMatrixStack()
	{
		theList = new String[ROWNUMBER][COLNUMBER];
		rowTopOfStack = 0;
		colTopOfStack = 0;
	}
	
	public boolean isEmpty()
	{
		if(theList[0][0] == null)
			return true;
		else
			return false;
	}
	   	
	public void push(String obj)
	{
		if (colTopOfStack == COLNUMBER)
		{
			String theList2[][] = new String[theList.length][COLNUMBER];
			
			for (int row = 0; row < theList2.length; row++)
			{
				for (int col = 0; col < theList2[0].length; col++)
				{
					theList2[row][col] = theList[row][col];
				}
			}
			
			theList = new String[theList.length + ROWNUMBER][COLNUMBER];
			
			for(int row = 0; row < theList2.length; row++)
			{
				for(int col = 0; col < theList2[0].length; col++)
				{
					theList[row][col] = theList2[row][col];
				}
			}
			rowTopOfStack++;
			colTopOfStack = 0;
		}
		theList[rowTopOfStack][colTopOfStack] = obj;
		colTopOfStack++;
	}

	public String pop()
	{
		String top = theList[rowTopOfStack][colTopOfStack - 1];
		theList[rowTopOfStack][colTopOfStack - 1] = null;
		colTopOfStack--;
		
		if(theList.length > ROWNUMBER)
		{
			if(theList[rowTopOfStack][0] == null)
			{
				String theList2[][] = new String[theList.length][COLNUMBER];
				
				for(int row = 0; row < theList2.length; row++)
				{
					for(int col = 0; col < theList2[0].length; col++)
					{
						theList2[row][col] = theList[row][col];
					}
				}
				
				theList = new String[theList.length - ROWNUMBER][COLNUMBER];
				
				for(int row = 0; row < theList.length; row++)
				{
					for(int col = 0; col < theList[0].length; col++)
					{
						theList[row][col] = theList2[row][col];
					}
				}
				rowTopOfStack--;
				colTopOfStack = COLNUMBER;
			}
		}
		return top;
	}

	public String peekTop()
	{
		return theList[rowTopOfStack][colTopOfStack];
	}

	public String toString()
	{
		String elements = "";
		for(int row = theList.length-1; row >= 0; row--)
		{
			for(int col = theList[0].length-1; col >= 0; col--)
			{
				if(!(theList[row][col] == null))
					elements += theList[row][col] + "\n";
			}
		}
		return elements;
	}
}
