//Dan Mine Period 1
import java.util.ArrayList;
public class MyArrayListStack implements Stack
{
	private ArrayList <String> theList;
	
	public MyArrayListStack()
	{
		theList = new ArrayList <String>();
	}
	
	public boolean isEmpty()
	{
			return theList.size() == 0;
	}
	   	
	public void push(String obj)
	{
		theList.add(obj);
	}

	public String pop()
	{
		return theList.remove(theList.size() - 1);
	}

	public String peekTop()
	{
		return theList.get(theList.size() - 1);
	}

	public String toString()
	{
		String elements = "";
		
		for(int i = theList.size(); i >= 0; i--)
		{
			elements += theList.get(i) + "\n";
		}	
		return elements;
	}
}
