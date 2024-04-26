//Dan Mine Period 1
public interface Stack 
{
   	//Precondition:   None noted
	//Postcondition: return true if the stack has no elements, false otherwise.
   	public boolean isEmpty();

   	//Precondition:   Receives a String object.
   	//Postcondition:  adds an element to the top of the stack.
   	public void push(String obj);
   	
   	//Precondition:  isEmpty( ) is false
	//Postcondition: "Pops" (i.e. removes) an element from the stack and returns it.  
   	public String pop();

   	//Precondition:  isEmpty( ) is false
	//Postcondition: returns the element on top of the stack without removing it.
   	public String peekTop();
   	
   	//Precondition:  isEmpty( ) is false
	//Postcondition: Returns a String that contains the elements in LIFO order - ONE ELEMENT PER LINE.  
   	public String toString();
   	
 }
