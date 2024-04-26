//Dan Mine
import java.util.Scanner;

public class Nim 
{
	private Pile thePile;
	private Player humanPlayer;
	private Player computerPlayer;
			
	//Constructor
	public Nim()
	{
		//code to initialize thePile instance variable.
		//code to initialize humanPlayer (send constructor information that this is a human.)
		//code to initialize computerPlayer (send constructor information that this is a computer.)
		humanPlayer = new Player (Player.HUMANPLAYER);
		computerPlayer = new Player(Player.COMPUTERPLAYER);
		thePile = new Pile();
	}
		
	//Methods
	//The pseudo-code given for playGame is a suggestion.  You may write how you like.
	public void playGame()
	{
		Player turn = coinToss();
		
		Scanner inputReader = new Scanner(System.in);
		
		System.out.println("Computer is playing: " + computerPlayer.getMode());
		
		System.out.println("__________________________________________________");
		
		while (thePile.getPile() > 1)
		{
			System.out.println("It is " + turn.getName() + "'s turn");
			System.out.println();
				if (turn == humanPlayer)
				{
					System.out.print("The pile has " + thePile.getPile() + " stones. Take: ");
					int amt = inputReader.nextInt();
					
					while (amt <= 0 || amt > thePile.getPile() / 2)
					{
						System.out.println("Illegal. Try again!");
						System.out.println();
						System.out.print("The pile has " + thePile.getPile() + " stones. Take: ");
						amt = inputReader.nextInt();
					}
					System.out.println("__________________________________________________");
					
					thePile.setPile(amt);
				}
				else	//must be computer’s turn
				{	
					if (computerPlayer.getMode().compareTo(Player.STUPIDMODE) == 0)
					{
						int amt = (int)(Math.random() * thePile.getPile() / 2) + 1;
						System.out.println("The pile has " + thePile.getPile());
						thePile.setPile(amt);
						System.out.println(computerPlayer.getName() + " took " + amt + " stones");
						System.out.println("__________________________________________________");
					}
					else
					{
						int exp = 1;
						int power = (int)Math.pow(2,exp);
						
						while (power - 1 <= thePile.getPile())
			             {
			                 exp++;
			                 power = (int) Math.pow(2, exp);
			             }
			             exp--;
			             
			             if (thePile.getPile() - (int)(Math.pow(2, exp) - 1) <= thePile.getPile() / 2 && thePile.getPile() - (int) (Math.pow(2, exp) - 1) != 0)
			             {
			            	 System.out.println("The pile has " + thePile.getPile());
			            	 System.out.println(computerPlayer.getName() + " took " + (thePile.getPile() - (int) (Math.pow(2, exp) - 1) + " stones"));
			                 thePile.setPile(thePile.getPile() - (int) (Math.pow(2, exp) - 1));
			            	 System.out.println("__________________________________________________");
			             }
			             else
			             {
			            	 int random = (int)(Math.random() * (thePile.getPile() / 2)) + 1;
			            	 System.out.println("The pile has " + thePile.getPile());
			            	 System.out.println(computerPlayer.getName() + " took " + random + " stones");
			                 thePile.setPile(random);
			            	 System.out.println("__________________________________________________");
			             }
					}
				}
			if(turn == humanPlayer)
				turn = computerPlayer;
			else
				turn = humanPlayer;
		}
		System.out.println("It is " + turn.getName() + "'s turn");
		System.out.println(turn.getName() + " loses!");
		inputReader.close(); // your last line of code should be to close the Scanner object. 
	}

	//Postcondition: This method generates a 0 or a 1 only.  If the random number generated is 0, the 
	//		    humanPlayer object is returned.  If the random number is 1, the 
	//		   computerPlayer object is returned.
	public Player coinToss( )
	{ 
		int turn = (int)(Math.random() * 2);
		
		if(turn == 0)
			return humanPlayer;
		else
			return computerPlayer;
	}

	//other methods are optional

} //end of Nim class