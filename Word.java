public class Word
{
	//Instance Variable
	//your code to declare a String instance variable. Do not
	//initialize it.
	private String word;
	
	//Constructor
	//your code to write a constructor to receive a String.
	//Assign the instance variable the value of this parameter.
	
	public Word(String inWord)
	{
		word = inWord;
	}
	//Methods Read the pre and post carefully.
	//Pre: (left blank on purpose)
	//Post: returns the value of the String instance variable in the Word object.
	public String getWord()
	{
		return word;
	}
	
	//Pre: getWord().length() >= 1
	//Post: returns the first character of the String instance variable in the Word object.
	public String getFirstLetter()
	{
		String firstLetter = word.substring(0,1);
		return firstLetter;
	}
	//Pre: 	getWord().length() >= 1
	//Post: returns the last character of the String instance variable in the Word object.
	public String getLastLetter()
	{
		String lastLetter = word.substring(word.length() - 1);
		return lastLetter;
	}
	//Pre: getWord().length() >= 1
	//Post: permanently removes the first character of the String instance variable in the Word object.
	public void removeFirstLetter()
	{
		word = word.substring(1);
	}
	
	//Pre: getWord().length() >= 1
	//Post: permanently removes the last character of the String instance variable in the Word object.
	public void removeLastLetter()
	{
		word = word.substring(0, word.length()-1);
	}
	
	//Pre: 	getWord().length() >= 1 stringToFind.length() >= 1
	//Post:	the position (i.e. index) of the first occurrence
	//of the String stringToFind is returned if it is
	//present in the Word object. Otherwise, the method
	//returns the value -1.
	public int findLetter(String stringToFind)
	{
		int index = word.indexOf(stringToFind);
		return index;
	}
	
	//Pre: stringToAdd.length() >= 1
	//Post: The String instance variable is permanently altered by inserting stringToAdd in the middle
	//of the String instance variable. If the String instance variable has an odd length, then the left part
	//of the String has less characters than the right. For instance, if the String instance variable has
	//a value of “dog” and stringToAdd has the value of “XYZ”, then the result is “dXYZog”.
	public void addToMiddle(String stringToAdd)
	{
		int length = word.length()/2;
		word = word.substring(0,length) + stringToAdd + word.substring(length);
	}
	
	//Pre: (left blank on purpose)
	//Post: the string instance variable has been reversed
	public void reverse()
	{
		String index = "";
		for(int i = word.length()-1; i >= 0; i--)
		{
			index += word.substring(i,i+1);
		}
		word = index;
	}
	
	//Pre: 	(left blank on purpose)
	//Post:	A String is returned that represents each character in getWord( ) on a line by itself
	public String toString()
	{
		String index = "";
		for(int i = 0; i < word.length(); i++)
		{
			index += word.substring(i,i+1) + "\n";
		}
		
		return index;
	}
}
