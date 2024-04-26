//Dan Mine
import java.util.Scanner;

public class Player
{
	//4 static final variables
	public static final String STUPIDMODE = "stupid";
	public static final String SMARTMODE = "smart";
	public static final String HUMANPLAYER = "human";
	public static final String COMPUTERPLAYER = "computer";

	//3 instance variables
	private String name;	  //Prompt for the name

	private String playerType; //The value is either HUMANPLAYER or COMPUTERPLAYER.  
						     //Note that this datatype could have been boolean. It was 
						     //purposely designed as a String so that you could 
						     //demonstrate your ability to compare String objects.

	private String mode;	 //The value is either STUPIDMODE or SMARTMODE. 
						  //Note that a HUMANPLAYER is always STUPIDMODE.
						  //For the COMPUTERPLAYER, Math.random( ) is used to 
						  //determine if SMARTMODE or STUPIDMODE will be 
						  //played.  Generate a random number that results in integer 0
						  //or integer 1.  A 0 represents SMARTMODE and a 1 represents 
						  //STUPIDMODE.  
	
	//Constructor
	public Player(String inPlayerType)
	{
		//you know what to do	 - initialize all the instance variables.	
		Scanner inputReader = new Scanner(System.in);
	
		playerType = inPlayerType;
		
		if(playerType.equals(HUMANPLAYER))
		{	
			System.out.print("Please enter the human name: ");	
			name = inputReader.nextLine();
		}
		else
		{
			System.out.print("Please enter the computer name: ");
			name = inputReader.nextLine();
		}
		
		int pMode = (int)(Math.random() * 2);
		
		if(pMode == 0)
			mode = STUPIDMODE;
		else
			mode = SMARTMODE;
		
	}	

	//Methods
	
	//Postcondition: the mode is returned
	public String getMode()
	{  
		//Your code here.  You only need 1 programming statement.
		return mode;
	}


	//Postcondition: the name is returned
	public String getName()
	{  
		//Your code here.  You only need 1 programming statement.
		return name;
    }	

	//other methods are optional.  Anything related to the NIM game (checking validity of stones to //take, etc.) belongs in NIM.
}  	//end of Player class