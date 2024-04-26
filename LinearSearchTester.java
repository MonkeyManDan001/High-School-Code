import java.util.ArrayList;
public class LinearSearchTester
{
	public static void main(String[] args)
	{
		int data[] = {5, 10, 15, 20, 25};
		
		System.out.println("Integer 10 is found at index: " + LinearSearchUtility.sequentialSearch(data, 10));
		System.out.println("Integer 20 is found at index: " + LinearSearchUtility.sequentialSearch(data, 20));
		System.out.println("Integer 30 is found at index: " + LinearSearchUtility.sequentialSearch(data, 30));
		
		System.out.println();
		
		String alpha[] = {"A", "B", "C", "D", "E"};
		
		System.out.println("String A is found at index: " + LinearSearchUtility.sequentialSearch(alpha, "A"));
		System.out.println("String D is found at index: " + LinearSearchUtility.sequentialSearch(alpha, "D"));
		System.out.println("String Z is found at index: " + LinearSearchUtility.sequentialSearch(alpha, "Z"));
		
		System.out.println();
		
		ArrayList<String> names = new ArrayList<String> ();
		names.add("Ann");
		names.add("Jack");
		names.add("Dina");
		names.add("Keith");
		
		System.out.println("String Ann is found at index: " + LinearSearchUtility.sequentialSearch(names, "Ann"));
		System.out.println("String Keith is found at index: " + LinearSearchUtility.sequentialSearch(names, "Keith"));
		System.out.println("String Ian is found at index: " + LinearSearchUtility.sequentialSearch(names, "Ian"));
		
	}
}