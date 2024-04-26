//Dan Mine Period 1
import java.util.Scanner;
public class GenericStack
{	

	//--------------------------------------------------------------------------
	private Stack myStack;
	//--------------------------------------------------------------------------
	public GenericStack(Stack inStack)
	{
		myStack = inStack;
	}
	
	//--------------------------------------------------------------------------	
	public void run()
	{
		String theChoice = null;
		Scanner in = new Scanner(System.in);
		do
		{
			//------------------------------------------------------------------
			Utility.displayStackMenu();
			//------------------------------------------------------------------
			theChoice = Utility.getChoice("1 2 3 4 5 Q");
			//------------------------------------------------------------------
			if (theChoice.equals("1"))
			{
				//------------------------------------------------------------------
				if (myStack.isEmpty())
					System.out.println("Stack is empty");
				else
					System.out.println("Stack is not empty");
			}
			
			//------------------------------------------------------------------
			else if(theChoice.equals("2"))  //Push
			{
				System.out.print("\nEnter the element to push:  ");
				String theString = in.nextLine();
				//------------------------------------------------------------------
				myStack.push(theString);
			}
			//------------------------------------------------------------------
			else if(theChoice.equals("3"))  //Pop
			{
				//------------------------------------------------------------------
				if (!myStack.isEmpty())
				{
					//------------------------------------------------------------------
					String theString = myStack.pop();
					System.out.println("\nYou just popped: " + theString + " from the stack");
				}
				else
					System.out.println("There are no elements to pop from the stack");
			}
			//------------------------------------------------------------------
			else if(theChoice.equals("4"))  //Peek
			{
				//------------------------------------------------------------------
				if (!myStack.isEmpty())
				{				
					//------------------------------------------------------------------
					String theString = myStack.peekTop();
					System.out.println("\n" + theString + " is on top of the stack");
				}
				else
					System.out.println("There are no elements to peek at in the stack");
			}
			//------------------------------------------------------------------
			else if(theChoice.equals("5"))  //display
			{
				//------------------------------------------------------------------
				if (!myStack.isEmpty())
				{
					System.out.println("The elements in the stack are:");
					//------------------------------------------------------------------
					System.out.println(myStack);
				}
				else
					System.out.println("There are no elements to display in the stack");
			}
			
			System.out.println("******************************************");
			
		//------------------------------------------------------------------
		} while (!theChoice.equals("Q"));
		
	}
}
