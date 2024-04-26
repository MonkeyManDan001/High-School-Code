import java.util.ArrayList;
public class LinearSearchUtility
{
	//Precondition:  param elements: an int array containing the items to be
	//				 				 searched.
	//               param target: the item to be found in elements
	//Postcondition: returns an index of target in elements if found; -1 otherwise
	public static int sequentialSearch(int[] elements, int target)
	{
		for (int j = 0; j < elements.length; j++)
		{
			if (elements[j] == target)
			{
				return j;
			}
		}
		return -1;
	}
	
	
	
	//Overload sequentialSearch to receive a String array and String target.
	
	public static int sequentialSearch(String[] elements, String target)
	{
		for (int j = 0; j < elements.length; j++)
		{
			if (elements[j].equals(target))
			{
				return j;
			}
		}
		return -1;
	}
	
	//Overload sequentialSearch to receive a String ArrayList and String target.
	
	public static int sequentialSearch(ArrayList <String> elements, String target)
	{
		for (int j = 0; j < elements.size(); j++)
		{
			if (elements.get(j).equals(target))
			{
				return j;
			}
		}
		return -1;
	}
}