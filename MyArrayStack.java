//Dan Mine Period 1
public class MyArrayStack implements Stack
{
	private String theList[];
	private int topOfStack;
	private static final int SLOTNUMBER = 5;
	
	public MyArrayStack()
	{
		theList = new String[SLOTNUMBER];
		topOfStack = -1;
	}
	
	public boolean isEmpty()
	{
		if(theList[0] == null)
			return true;
		else
			return false;
	}
	   	
	public void push(String obj)
	{
		topOfStack++;
		
		if(!(theList[theList.length-1] == null))
		{
			String theList2[] = new String[theList.length + SLOTNUMBER];
			
			for(int i = 0; i < theList.length; i++)
			{
				theList2[i] = theList[i];
			}
			theList = theList2;
		}
		theList[topOfStack] = obj;
	}

	public String pop()
	{
		String top = theList[topOfStack];
		
		theList[topOfStack] = null;
		topOfStack--;
		
		if(theList[theList.length-SLOTNUMBER] == null)
		{
			String theList2[] = new String[theList.length - SLOTNUMBER];
			
			if(!(theList2.length == 0))
			{
				for(int i = 0; i < theList.length - SLOTNUMBER; i++)
				{
					theList2[i] = theList[i];
				}
				theList = theList2;
			}
		}
		return top;
	}

	public String peekTop()
	{
		return theList[topOfStack];
	}

	public String toString()
	{
		String elements = "";
		
		for(int i = theList.length; i >= 0; i--)
		{
			if(!(theList[i] == null))
				elements += theList[i] + "\n";
		}
		return elements;
	}
}
