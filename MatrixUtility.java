public class MatrixUtility
{
	public static int[] getColumn(int theMatrix[][], int col)
	{
		int[] array = new int[theMatrix[0].length];
		
		for(int i = 0; i < theMatrix[0].length; i++)
		{
			array[i] = theMatrix[i][col];
		}
		
		return array;
	}
	
	public static boolean containsDuplicates(int theArray[])
	{
		for(int i = 0; i < theArray.length + 1; i++)
		{
			int count = 0;
			
			for(int index = 0; index < theArray.length; index++)
			{
				if(theArray[index] == i)
					count++;
				
				if(count >= 2)
					return true;
			}
		}
		
		return false;
	}
	public static boolean hasAllValues(int arr1[], int arr2[])
	{
		int count = 0;
		
		for(int i = 0; i < arr1.length; i++)
		{
			for(int index = 0; index < arr1.length; index++)
			{
				if(arr1[i] == arr2[index])
					count++;
				
				if(count == arr1.length)
					return true;
			}
			if(containsDuplicates(arr1) || containsDuplicates(arr2))
				count--;
		}
		
		return false;
	}
	public static boolean isLatin(int square[][])
	{
		for(int i = 0; i < square.length; i++)
		{
			int count = 0;
			int count1 = 0;
			
			for(int index = 0; index < square.length; index++)
			{
				if(containsDuplicates(square[i]))
					return false;
				
				if(hasAllValues(square[i], square[index]))		
					count++;
				
				if(containsDuplicates(getColumn(square, i)))
					return false;
				
				if(hasAllValues(getColumn(square, i),getColumn(square, index)))
					count1++;
			}
			
			if(count == square.length && count1 == square.length)
				return true;
		}
		
		return false;
	}
}
