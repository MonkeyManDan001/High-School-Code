import java.util.ArrayList;
public class InsertionSortModified 
{
	//Precondition:  an ArrayList of unique Integer data is given.
    //Postcondition: the data in the ArrayList is in ascending order.
    //Constraint:    This method must reflect the insertion sort algorithm.
    //			  This method (disregarding the helper method) runs in O(n).

    //Note:		   You may call a helper method to load the ArrayList to be searched.
    public static void insertWithBinarySrch(ArrayList<Integer> list)
    {
    	ArrayList<Integer> arr = new ArrayList<Integer>();
    	arr.add(list.get(0));
    	
		for (int i = 1; i < list.size(); i++)
		{
			int target = list.get(i);
			int index = binarySearch(arr, target);
			
			arr.add(index, target);
		}
		
		for(int i = 0; i < list.size(); i++)
		{
			list.set(i, arr.get(i));
		}
    }

    //Precondition:  an ArrayList of unique Integer data is given.  
    //			  All data is in ascending order.
    //			  An integer target is given.
    //Postcondition: returns the index as to where the target should be placed in the 
    //			  ArrayList.  The elements in the array are unchanged.
    //Constraint:    This method must reflect the binary search algorithm.
    //			  This method runs in O(log n).
    //Note:		  NO helper methods may be called.
    public static int binarySearch(ArrayList<Integer> elements, int target)
    {
		//KEEP THIS NEXT LINE OF CODE FOR DEBUGGING REASONS:
    	System.out.println("Top of binarySearch. Elements: " + elements + "  target: " + target);

		int left = 0;
		int right = elements.size() - 1;
		
		while (left <= right)
		{
			int middle = (left + right) / 2;
			
			if (target < elements.get(middle))
			{
				right = middle - 1;
			}
			else if (target > elements.get(middle))
			{
				left = middle + 1;
			}
			else
			{
				return middle;
			}
		}
		
		return left;
    }

}

