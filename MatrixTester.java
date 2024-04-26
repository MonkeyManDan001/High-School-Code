import java.util.Scanner;
public class MatrixTester 
{
	public static void main(String[] args)
	{
		//**************************************************************
		//Use this section if using hardcoded test cases
		//**************************************************************
		final int NUMTESTCASES = 5;
		int matrix1[][] = { {1, 2, 3}, {2, 3, 1}, {3, 1, 2} };
		int matrix2[][] = { {10, 30, 20, 0}, {0, 20, 30, 10}, {30, 0, 10, 20}, {20, 10, 0, 30} };
		int matrix3[][] = { {1, 2, 1}, {2, 1, 1}, {1, 1, 2} };
		int matrix4[][] = { {1, 2, 3}, {3, 1, 2}, {7, 8, 9} };
		int matrix5[][] = { {1, 2}, {1, 2} };
		
		int[][] theMatrix = null;
		
		for (int testCase = 1; testCase <= NUMTESTCASES; testCase++)
		{
			System.out.println("\n\n************************");
			System.out.println("\nTest Case:  " + testCase + "\n");
			if (testCase == 1)
				theMatrix = matrix1;
			else if (testCase == 2)
				theMatrix = matrix2;
			else if (testCase == 3)
				theMatrix = matrix3;
			else if (testCase == 4)
				theMatrix = matrix4;
			else if (testCase == 5)
				theMatrix = matrix5;
				
			displayMatrix(theMatrix);
			
			//Note this line won't compile until you complete the isLatin method.
			boolean isLatinMatrix = MatrixUtility.isLatin(theMatrix);
		
			if (isLatinMatrix == true)
				System.out.print("\nYour result: It is a latin matrix");
			else
				System.out.print("\nYour result: It is NOT a latin matrix");
		
		}
	
		//**************************************************************
		//Use this section if loading up matrix via keyboard
		//**************************************************************
		
		/*
		Scanner input = new Scanner(System.in);
		System.out.print("Enter the size of the matrix: ");
		int size = input.nextInt();
		
		int matrix[][] = new int[size][size];
		loadMatrix(matrix);
		displayMatrix(matrix);
		
		boolean isLatinMatrix = MatrixUtility.isLatin(matrix);
		
		if (isLatinMatrix == true)
				System.out.print("It is a latin matrix");
		else
			System.out.print("It is NOT a latin matrix");
		*/
	}
	
	
	//**************************************************************
	//Use this method if loading up matrix via keyboard
	//**************************************************************
	public static void loadMatrix(int matrix[][])
	{
		Scanner input = new Scanner(System.in);
		int num = -1;
		for (int i = 0; i < matrix.length; i++)
		{
			for (int j = 0; j < matrix[0].length; j++)
			{
				System.out.print("Enter number: ");
				num = input.nextInt();
				matrix[i][j] = num;
			}
		}
		input.close();
	}
	
	//**************************************************************

	public static void displayMatrix(int theMatrix[][])
	{
		for (int i = 0; i < theMatrix.length; i++)
		{
			for (int j = 0; j < theMatrix[0].length; j++)
			{
				System.out.print(theMatrix[i][j] +  "  ");
			}
			System.out.println();
		}
	}
}