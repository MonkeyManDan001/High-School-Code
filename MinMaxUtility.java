import java.lang.reflect.Array;
import java.util.ArrayList;

//RESTRICTION ON ALL METHODS: NO SORTING ALGORITHMS

public class MinMaxUtility
{
	//Precondition:	   receives an int array called list filled with unique data.  
	//				   list.length > 0
	//Postcondition:   returns the smallest integer in list.
	public static int getMin(int[ ] list)
	{
         int temp = list[0];
         
         for (int i = 1; i < list.length; i++)
         {
        	 if(temp > list[i])
        		 temp = list[i];
         }
         
         return temp;
	}
	

	//Precondition:	   receives an Integer ArrayList called list filled with unique data.  
	//				   list.size( ) > 0
	//Postcondition:   returns the smallest integer in list.
	public static int getMax(ArrayList<Integer> list)
	{
		int temp = list.get(0);
        
        for (int i = 1; i < list.size(); i++)
        {
       	 if(temp < list.get(i))
       		 temp = list.get(i);
        }
        
        return temp;
	}
	

	//Precondition:	   receives an int array called list filled with unique data.  list.length > 1
	//Postcondition:   returns the second smallest integer in list.
	//RESTRICTION:     DO NOT create another data structure.
	public static int getSecondMin(int[ ] list)
	{
         //NOTE THE RESTRICTION
		int min = getMin(list);
		int secMin = list[0];
		
		for(int i = 1; i < list.length; i++)
		{
			if(!(secMin == min) && !(list[i] == min))
			{
				if(secMin > list[i])
					secMin = list[i];
			}
			else if(secMin == min)
			{
				secMin = list[i];
			}
		}
		
		return secMin;
	}


	//Precondition:	  receives a String ArrayList called list filled with unique data.  
	//				  list.size( ) > 0
	//Postcondition:  returns the String that would appear first in lexicographical ordering from list.
	public static String getFirst(ArrayList<String> list)
	{
		String temp = list.get(0);
        
        for (int i = 1; i < list.size(); i++)
        {
       	 if(temp.compareTo(list.get(i)) > 0)
       		 temp = list.get(i);
        }
        
        return temp;
	}
	

	//Precondition:	   receives a String array called list filled with unique data.  list.length( ) > 0
	//Postcondition:  returns the String that would appear last in lexicographical ordering from list.
	public static String getLast(String[] list)
	{
		String temp = list[0];
        
        for (int i = 1; i < list.length; i++)
        {
       	 if(temp.compareTo(list[i]) < 0)
       		 temp = list[i];
        }
        
        return temp;
	}
	
	
	//Precondition:	  receives an integer array
	//Postcondition:  returns the minimum gap between adjacent values in
	//				  the array (see specs).
	public static int minGap(int[ ] list)
	{
        int[]temp = new int[list.length - 1];
        
        if(list.length < 2)
        	return 0;
        else
        {
        	for(int i = 0; i < list.length - 1; i++)
        	{
        		int gapSize = (list[i + 1] - list[i]);
        		temp[i] = gapSize;
        	}
        
        	int minGap = getMin(temp);
        
        	return minGap;
        }
	}
}