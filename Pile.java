//Dan Mine
public class Pile 
{
	//Instance or static and/or final variables (you decide the type of variable).  To help you decide,
	//let’s say in theory it is possible to have 3 NIM games being played at the same time.  Each of 
	//these games has its own values for the pile size, MIN, and MAX.
	//code to declare a variable to hold the current pile size
	//code to declare a variable to hold the minimum.  The minimum is assigned 10 for this current game 
	//and will never change during execution of this game.  
	//code to declare a variable to hold the maximum.  The maximum is assigned 100 for this current 
	//game and will never change during execution of this game.
		
	private int thePile;
	private static final int MIN = 10;
	private static final int MAX = 100;
	
	//Constructor
	public Pile()
	{
		thePile = (int)(Math.random() * (MAX-MIN+1) + MIN);
	}	
	//Methods
	//Postcondition:  the pile size has been changed.
	public void setPile(int inPile) 
	{ 
		thePile = thePile - inPile;
	}

	//Postcondition:  the pile size is returned.
	public int getPile()
	{ 
		return thePile;
	}
		//other methods are optional but I don’t think any are needed.
}  //end of Pile class
