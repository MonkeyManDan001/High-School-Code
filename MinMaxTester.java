import java.util.ArrayList;

public class MinMaxTester
{
	public static void display(boolean worked, String methodName)
	{
		final String DOTS = "...........";
		if (worked)
			System.out.println(methodName + DOTS + "WORKED");
		else
			System.out.println(methodName + DOTS + "FAILED");
		
	}
	
	public static ArrayList<Integer> convertFromArray(int[] array)
	{
		ArrayList<Integer> list = new ArrayList<Integer>( );
		for (Integer num : array)
			list.add(num);		
		return list;
	}
	
	public static ArrayList<String> convertFromArray(String[] array)
	{
		ArrayList<String> list = new ArrayList<String>( );
		for (String word : array)
			list.add(word);		
		return list;
	}
	public static void main(String[] args)
	{
		//int arrays to use for test cases:
		int[] array1 = {1, 5, 4, 3, 2, 0};
		int[] array2 = {1, 5, -4, 3, -2, 10};
		int[] array3 = {-10, 5, -4, 3, -2, 10};
		int[] array4 = {9, 5, -4, 3, -2, -20};
		
		ArrayList<Integer> list1 = convertFromArray(array1);
		ArrayList<Integer> list2 = convertFromArray(array2);
		ArrayList<Integer> list3 = convertFromArray(array3);
		ArrayList<Integer> list4 = convertFromArray(array4);
		
		String[] strArray1 = {"A", "Z", "C", "F", "X"};
		String[] strArray2 = {"programming", "is", "fun"};
		String[] strArray3 = {"think", "twice", "code", "once"};
		String[] strArray4 = {"array", "arrayList", "matrix", "inheritance", "recursion", "sort", "search"};
		
		ArrayList<String> strList1 = convertFromArray(strArray1);
		ArrayList<String> strList2 = convertFromArray(strArray2);
		ArrayList<String> strList3 = convertFromArray(strArray3);
		ArrayList<String> strList4 = convertFromArray(strArray4);
		
		/*******************/
		/*  Testing getMin */
		/*******************/
		System.out.println("\nTESTING getMin\n");
		boolean check = MinMaxUtility.getMin(array1) == 0;
		display(check, "TEST CASE #1:\tgetMin");
		
		check = MinMaxUtility.getMin(array2) == -4;
		display(check, "TEST CASE #2:\tgetMin");
		
		check = MinMaxUtility.getMin(array3) == -10;
		display(check, "TEST CASE #3:\tgetMin");
		
		check = MinMaxUtility.getMin(array4) == -20;
		display(check, "TEST CASE #4:\tgetMin");
		
		System.out.println("**************************************");
		
		
		/*******************/
		/*  Testing getMax */
		/*******************/
		System.out.println("\nTESTING getMax\n");
		check = MinMaxUtility.getMax(list1) == 5;
		display(check, "TEST CASE #1:\tgetMin");
		
		check = MinMaxUtility.getMax(list2) == 10;
		display(check, "TEST CASE #2:\tgetMax");
		
		check = MinMaxUtility.getMax(list3) == 10;
		display(check, "TEST CASE #3:\tgetMax");
		
		check = MinMaxUtility.getMax(list4) == 9;
		display(check, "TEST CASE #4:\tgetMax");
		
		System.out.println("**************************************");
		
		
		
		/*************************/
		/*  Testing getSecondMin */
		/*************************/
		System.out.println("\nTESTING getSecondMin\n");
		check = MinMaxUtility.getSecondMin(array1) == 1;
		display(check, "TEST CASE #1:\tgetSecondMin");
		
		check = MinMaxUtility.getSecondMin(array2) == -2;
		display(check, "TEST CASE #2:\tgetSecondMin");
		
		check = MinMaxUtility.getSecondMin(array3) == -4;
		display(check, "TEST CASE #3:\tgetSecondMin");
		
		check = MinMaxUtility.getSecondMin(array4) == -4;
		display(check, "TEST CASE #4:\tgetSecondMin");
		
		System.out.println("**************************************");
		
		
		/*************************/
		/*  Testing getFirst     */
		/*************************/
		System.out.println("\nTESTING getFirst\n");
		check = MinMaxUtility.getFirst(strList1).equals("A");
		display(check, "TEST CASE #1:\tgetFirst");
		
		check = MinMaxUtility.getFirst(strList2).equals("fun");
		display(check, "TEST CASE #2:\tgetFirst");
		
		check = MinMaxUtility.getFirst(strList3).equals("code");
		display(check, "TEST CASE #3:\tgetFirst");
		
		check = MinMaxUtility.getFirst(strList4).equals("array");
		display(check, "TEST CASE #4:\tgetFirst");
		
		System.out.println("**************************************");
		
		
		/*************************/
		/*  Testing getLast      */
		/*************************/
		System.out.println("\nTESTING getLast\n");
		check = MinMaxUtility.getLast(strArray1).equals("Z");
		display(check, "TEST CASE #1:\tgetLast");
		
		check = MinMaxUtility.getLast(strArray2).equals("programming");
		display(check, "TEST CASE #2:\tgetLast");
		
		check = MinMaxUtility.getLast(strArray3).equals("twice");
		display(check, "TEST CASE #3:\tgetLast");
		
		check = MinMaxUtility.getLast(strArray4).equals("sort");
		display(check, "TEST CASE #4:\tgetLast");
		
		System.out.println("**************************************");
		
		
		/*************************/
		/*  Testing minGap      */
		/*************************/
		System.out.println("\nTESTING minGap\n");
		check = MinMaxUtility.minGap(array1) == -2;
		display(check, "TEST CASE #1:\tminGap");
		
		check = MinMaxUtility.minGap(array2) == -9;
		display(check, "TEST CASE #2:\tminGap");
		
		check = MinMaxUtility.minGap(array3) == -9;
		display(check, "TEST CASE #3:\tminGap");
		
		check = MinMaxUtility.minGap(array4) == -18;
		display(check, "TEST CASE #4:\tminGap");
		
		System.out.println("**************************************");
	}
}