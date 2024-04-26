import java.util.Scanner;
public class WordTester
{
	public static void displayMenu()
	{
		//Display the menu
		System.out.println("\n*****************************************\n");
		System.out.println("\t1...Get the word");
		System.out.println("\t2...Get the first letter");
		System.out.println("\t3...Get the last letter");
		System.out.println("\t4...Remove the first letter");
		System.out.println("\t5...Remove the last letter");
		System.out.println("\t6...Find a letter");
		System.out.println("\t7...Add to the middle of the word");
		System.out.println("\t8...Reverse the letters of the word");
		System.out.println("\t9...Display each letter separately");
		System.out.println();
		System.out.println("\t-1...Quit the program");
		System.out.println("\n\n");
	}
	
	public static void main(String[] args)
	{
		//ASSIGNMENT: Create a Scanner object. You only need to construct it
		// one time.
		
		Scanner input = new Scanner(System.in);
		
		//ASSIGNMENT: Prompt the user for a word and read it in as a String
		
		System.out.print("Please enter a String: ");
		String inputReader = input.nextLine();
		
		//ASSIGNMENT: Construct a Word object
		
		Word word1 = new Word(inputReader);
		
		//ASSIGNMENT: Call the displayMenu method found in this class.
		
		WordTester.displayMenu();
		
		//ASSIGNMENT: Prompt the user for a choice and read it in as an int
		
		System.out.print("Please enter a choice: ");
		int theChoice = input.nextInt();
		
		while (theChoice != -1)
		{
			System.out.println();
			
			if (theChoice == 1)
			{				
				System.out.println("The word is: " + word1.getWord());
			}
			else if (theChoice == 2)
			{
				if (word1.getWord().length() >= 1)
					System.out.println("The first letter is " + word1.getFirstLetter());
				else
					System.out.println("\tERROR - You are in violation of the precondition");
			}
			else if (theChoice == 3)
			{
				if (word1.getWord().length() >= 1)
					System.out.println("The last letter is " + word1.getLastLetter());
				else
					System.out.println("\tERROR - You are in violation of the precondition");
			}
			else if (theChoice == 4)
			{
				if (word1.getWord().length() >= 1)
				{
					word1.removeFirstLetter();
					System.out.println("The first letter has now been removed");
				}
				else
					System.out.println("\tERROR - You are in violation of the precondition");
			}
			else if (theChoice == 5)
			{
				if (word1.getWord().length() >= 1)
				{
					word1.removeLastLetter();
					System.out.println("The last letter has now been removed");
				}
				else
					System.out.println("\tERROR - You are in violation of the precondition");
			}
			else if (theChoice == 6)
			{
				if(word1.getWord().length() >= 1)
				{
					System.out.print("\tPlease enter a character to find: ");
					String junk = input.nextLine();
					String stringToFind = input.nextLine();
					if(stringToFind.length() >= 1)
						System.out.println("\t"+ stringToFind + " is found at index: " + word1.findLetter(stringToFind));
					else
						System.out.println("\tERROR - You are in violation of the precondition");
				}
				else
					System.out.println("\tERROR - You are in violation of the precondition");
			}
			else if (theChoice == 7)
			{
				System.out.print("\tPlease enter a String to add to middle: ");
				String junk = input.nextLine();
				String stringToAdd = input.nextLine();
				if(stringToAdd.length() >= 1)
				{
					word1.addToMiddle(stringToAdd);
					System.out.println("\tThe word now includes " + stringToAdd);
				}
				else
					System.out.println("\tERROR - You are in violation of the precondition");
			}
				
			else if (theChoice == 8)
			{
					word1.reverse();
					System.out.println("The letters have now been reversed");
			}
			else if (theChoice == 9)
			{
				System.out.println(word1.toString());
			}
			
			
			//ASSIGNMENT: Call the displayMenu method found in this class.
		
			WordTester.displayMenu();
			
			//ASSIGNMENT: Prompt the user for a choice and read it in as an int
			
			System.out.print("Please enter a choice: ");
			theChoice = input.nextInt();
		
		}
		
		System.out.println("End of Program");
		
		//Closes the Scanner object. Use the name of your object reference
		//variable. I assumed it was called input but change it to your
		//variable name.
		input.close();
	}
}
