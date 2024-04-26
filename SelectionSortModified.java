import java.lang.reflect.Array;

public class SelectionSortModified 
{
	public static void selectionSort(int[] arr)
	{
		int count = 0;
		
		for(int i = 0; i < arr.length / 2; i++)
		{
			int minIndex = i;
			int maxIndex = i;
			
			for(int j = i + 1; j < arr.length - i; j++)
			{
				if(arr[j] < arr[minIndex])
				{
					minIndex = j;
				}
				
				if(arr[j] > arr[maxIndex])
				{
					maxIndex = j;
				}
			}
			
			int temp = arr[i];
			arr[i] = arr[minIndex];
			arr[minIndex] = temp;
			
			if(maxIndex == i)
			{
				maxIndex = minIndex;	
			}
			
			int temp2 = arr[maxIndex];
			arr[maxIndex] = arr[arr.length - 1 - i];
			arr[arr.length - i - 1] = temp2;
			
			count++;
			
			System.out.print("AFTER PASS " + count + ":   ");
			displayArray(arr);
		}
	}
	
	public static void displayArray(int[] theArray)
	{
		for (int i = 0; i < theArray.length; i++)
			System.out.print(theArray[i] + "  ");
		System.out.println();
	}
}
