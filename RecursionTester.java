import java.util.Scanner;
public class RecursionTester
{
	private static int SENTINEL = -999;
	//Precondition:   receives a positive integer (n)
	//Postcondition:  returns the number of digits in parameter n
	public static int numDigits(int n)
	{
		if(n / 10 == 0)
		{
			return 1;
		}
		
		return numDigits(n / 10) + 1;
	}



	//Description: This method will ask the user for integers until a SENTINEL of -999 is reached.  
	//             When the sentinel is reached, the method will display only the even integers 
	//             in reverse order.  
	//Precondition: A Scanner object (so that it is created once, not multiple times during
	//			    recursive calls.
	//Postcondition:  the even integers will be displayed in reverse order on a line by themselves.
	public static void writeEven(Scanner in )
	{
		System.out.print("Enter a number (-999) to quit: ");
		int number = in.nextInt();
		
		if(number != SENTINEL)
		{
			writeEven(in);
			
			if(number % 2 == 0)
			{
				System.out.println(number);
			}
		}
	}

	//Description:	  The computer will take a guess until the guess matches the target.
	//			      A guess will always consist of the midpoint of the high-low range.
	//Precondition:   Receives 3 integers.  The first parameter is the lowest value in the range, 
	//				  second parameter is the highest value in the range, and the third parameter
	//				  is the "target" guess.
	//Postcondition:  returns the number of guesses it took for the computer to guess the "target"
	/*public static int highLow(int low, int high, int target) 
	{
	
		
	}*/

	public static void main(String[] args)
	{
	 
	 	/********************/
		/*   NUMDIGITS     */
		/*******************/
		System.out.println("NUMDIGITS\n");
		int value = 5;
		int digits = numDigits(value);
		System.out.println("Number of digits in\t" + value + ":\t" + digits);
		
		value = 1000;
		digits = numDigits(value);
		System.out.println("Number of digits in\t" + value + ":\t" + digits);
		
		value = 0;
		digits = numDigits(value);
		System.out.println("Number of digits in\t" + value + ":\t" + digits);
		
		value = 12345;
		digits = numDigits(value);
		System.out.println("Number of digits in\t" + value + ":\t" + digits);

		System.out.println("***********************************");

		/********************/
		/*    WRITEEVEN    */
		/*******************/
		System.out.println("\nWRITEEVEN\n");
		//Calling writeEven after creating a Scanner object.
		Scanner input = new Scanner(System.in);
		writeEven(input);
		
		System.out.println("***********************************");
		
		/********************/
		/*    HIGH-LOW     */
		/*******************/
		/*System.out.println("\nHIGH-LOW\n");
		int target = 1;
		int guessCount = (highLow(1, 100, target));
		System.out.println("guessCount with target = " + target + ": " + guessCount);
		
		System.out.println();
		
	    target = 100;
		guessCount = (highLow(1, 100, target));
		System.out.println("guessCount with target = " + target + ": " + guessCount);
		
		System.out.println();
		
		target = 49;
		guessCount = (highLow(1, 100, target));
		System.out.println("guessCount with target = " + target + ": " + guessCount);
		
		System.out.println();
		
		target = 51;
		guessCount = (highLow(1, 100, target));
		System.out.println("guessCount with target = " + target + ": " + guessCount);
		
		System.out.println("***********************************");*/


	}

}