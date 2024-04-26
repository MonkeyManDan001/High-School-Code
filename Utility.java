//Dan Mine Period 1
import java.util.Scanner;

public class Utility
{
	public static void displayDataStructureMenu()
	{
		System.out.println("\t1...use an Array");
		System.out.println("\t2...use an ArrayList");
		System.out.println("\t3...use a matrix");
				
		System.out.print("\nChoice: ");
	}

	public static void displayStackMenu()
	{
		System.out.println();
		System.out.println("\t1...Check if Empty");
		System.out.println("\t2...Push an Element onto Stack");
		System.out.println("\t3...Pop an Element off Stack");
		System.out.println("\t4...Peek at the Element on Top of Stack");
		System.out.println("\t5...Display the elements in the Stack");
		System.out.println("\tQ...Quit");
		
		System.out.print("\nChoice: ");
	}
	
	//Precondition: a String of valid choices are received as 1 string
	//              where each valid value is separated by a space.
	//Postcondition: a valid choice is returned
	public static String getChoice(String validNums)
	{
		String theChoice = null;
		Scanner in = new Scanner(System.in);
		do
		{
			theChoice = in.nextLine();
		} while (validNums.indexOf(theChoice) == -1);
		
		return theChoice;
	}
}