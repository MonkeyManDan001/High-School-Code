import java.util.Scanner;
public class DataStorageTester
{
	public static void displayMenu()
	{
		System.out.println("----------------------------------------------");
		System.out.println();
		System.out.println("\t1...Get Number of Elements");
		System.out.println("\t2...Add an Element");
		System.out.println("\t3...Add an Element to a particular slot");
		System.out.println("\t4...Peek at an Element in a particular slot");
		System.out.println("\t5...Replace an element at a particular slot");
		System.out.println("\t6...Remove an Element from a particular slot");
		System.out.println("\t7...Remove all occurrences of a value from the ArrayList");
		System.out.println("\t8...Reverse the contents of the ArrayList");
		System.out.println("\t9...Display the contents of the data structure\n");
		System.out.println("\tQ...Quit\n");
	}
		
	public static void main(String[] args)
	{
		Scanner in = new Scanner(System.in);
		DataStorage data = new DataStorage();
		
		displayMenu();
		
		System.out.print("Enter Choice: ");
		String theChoice = in.nextLine();
			
		while (theChoice.compareTo("Q") != 0)
		{
			if (theChoice.compareTo("1") == 0)
			{
				System.out.println("The size of the array is: " + data.size());
			}
			else if (theChoice.compareTo("2") == 0)
			{
				System.out.print("Enter the String to add into data structure: ");
				String choice = in.nextLine();
				data.add(choice);
			}
			else if (theChoice.compareTo("3") == 0)
			{
				System.out.print("Enter the String to add into data structure: ");
				String choice = in.nextLine();
				System.out.print("Enter the index you want to add it at: ");
				int otherChoice = in.nextInt();
				String junk = in.nextLine();
				if (otherChoice < 0 || otherChoice > data.size())
				{
					System.out.println("The index entered will cause a violation of the precondition.");
				}
				else
				{
					data.add(otherChoice, choice);
				}	
			}
			else if (theChoice.compareTo("4") == 0)
			{
				System.out.print("Enter the index you want to peek at: ");
				int otherChoice = in.nextInt();
				String junk = in.nextLine();
			
				if (otherChoice < 0 || otherChoice >= data.size())
				{
					System.out.println("The index entered will cause a violation of the precondition.");
				}
				else
				{
					System.out.println(data.get(otherChoice) + " was found in this slot");
				}
			}
			else if (theChoice.compareTo("5") == 0)
			{
				System.out.print("Enter the String to add into data structure: ");
				String choice = in.nextLine();
				System.out.print("Enter the index you want to add it at: ");
				int otherChoice = in.nextInt();
				String junk = in.nextLine();
							
				if (otherChoice < 0 || otherChoice >= data.size())
				{
					System.out.println("The index entered will cause a violation of the precondition.");
				}
				else
				{
					System.out.println("You replaced element: " + data.set(otherChoice, choice));
				}
			}
			else if (theChoice.compareTo("6") == 0)
			{
				System.out.print("Enter the index you want to remove: ");
				int otherChoice = in.nextInt();
				String junk = in.nextLine();
				
				if (otherChoice < 0 || otherChoice >= data.size())
				{
					System.out.println("The index entered will cause a violation of the precondition.");
				}
				else
				{
					System.out.println("You removed element: " + data.remove(otherChoice));
				}
			}
			else if (theChoice.compareTo("7") == 0)
			{
				System.out.print("Enter the value you want to remove: ");
				String choice = in.nextLine();
				
				if(choice.compareTo("") == 0)
				{
					System.out.println("Cannot remove empty string");
				}
				else
				{
					System.out.println("All slots containing " + choice + " have been removed");
					data.removeAll(choice);
				}
			}
			else if (theChoice.compareTo("8") == 0)
			{
				System.out.println("The contents have been reversed");
				data.reverseContents();
			}
			else if (theChoice.compareTo("9") == 0)
			{
				System.out.println(data.toString());
			}
			
			displayMenu();
			System.out.print("Enter Choice: ");
			theChoice = in.nextLine();
		}
		
		System.out.println("End of Lab");
	}
}