import java.util.Scanner;
public class Tester 
{
	public static NoteTaker getObject()     //Do not change this method header!
	{
		Scanner input = new Scanner(System.in);
		String validChoices = "1 2 3";
		String choice = null;
		System.out.println("------------------------------------------");
		do
		{
			System.out.println("Pick a Notetaker......any Notetaker\n");
			System.out.println("1\tNotebook");
			System.out.println("2\tMicrosoft Word");
			System.out.println("3\tCell Phone");
			System.out.println();
			System.out.print("Enter Choice: ");
			choice = input.nextLine();
		} while (validChoices.indexOf(choice) == -1);
		System.out.println();

		//Fill in the blanks below
		if (choice.equals("1"))
			return new Notebook();
		else if (choice.equals("2"))
			return new MicrosoftWord();
		else
			return new CellPhone();
	}
	
	public static void main(String[] args)
	{
		Scanner in = new Scanner(System.in);
		String choice = null;
		System.out.print("Do you want to take notes? (Y/N): ");
		choice = in.nextLine();
		while (choice.equals("Y"))
		{
			NoteTaker note = getObject();
			
			note.writingTool();
			note.beginNotes();
			note.saveNotes();
			note.endNotes();
			
			System.out.print("\nDo you want to take notes? (Y/N): ");
			choice = in.nextLine();
		}
		
		System.out.print("Bye");
	}

}
