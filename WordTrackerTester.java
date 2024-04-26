import java.util.Scanner;
import java.io.*;
public class WordTrackerTester
{
		/*************************************************************/
		/*			  Reading data from keyboard				     */
		/*************************************************************/
		
		public static void main(String[] args)
		{
			WordList words = new WordList();
			
			//read in words from the Keyboard
			Scanner reader = new Scanner(System.in);
			
			System.out.print("Enter word: ");
			String currentWord = reader.nextLine();
			while (! currentWord.equals("quit"))		//type "quit" to end
			{
				words.addToLog(currentWord);
				System.out.print("Enter word: ");
				currentWord = reader.nextLine();
			}
			
			//display the output
			System.out.println(words);
			
			reader.close();
		}
		
				
		/*************************************************************/
		/*			  Reading data from a text file  			     */
		/*************************************************************/
	
		//public static void main(String args[])  throws FileNotFoundException
	    //{
			/***********************************************************/
			/* 			     CHOOSE AN INPUT FILE                      */
			/***********************************************************/
			//File fromFile  = new File("input1.txt");  
    		//File fromFile  = new File("input2.txt");  
    		//File fromFile  = new File("input3.txt"); 
    		
			/***********************************************************/
			/*  SET UP SCANNER TO READ FROM THE INPUT FILE             */
			/***********************************************************/
    		// Uses Scanner for file input.  Note the parameter does not say System.in
    		// System.in means read from the keyboard.  fromFile is a File.
			//Scanner fileReader = new Scanner(fromFile);		
    		
			/***********************************************************/
			/* 			     CHOOSE AN OUTPUT FILE                     */
			/***********************************************************/
    		//PrintWriter outFile = new PrintWriter("output1.txt");  
	    	//PrintWriter outFile = new PrintWriter("output2.txt");  
	    	//PrintWriter outFile = new PrintWriter("output3.txt");  
	        	        
	    	//WordList words = new WordList();
	    
	       	//while (fileReader.hasNextLine())  //... Loop as long as there are input lines.
	    	//{
	    		//String currentWord = fileReader.nextLine();
	    		//System.out.println("Processing word: " + currentWord);
	    		//words.addToLog(currentWord);
	    	//}

	    	//outFile.println(words);		//Display the output
	        
	    	//System.out.println("\nUse Eclipse to open up the file called \"output#.txt\" to see the data written to this file");
	    				
	    	//Close files.
	    	//outFile.flush();	//flush the contents.
	    	//outFile.close();
				
			//Close scanner
			//fileReader.close();
	    //} 

}