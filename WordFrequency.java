public class WordFrequency
{
	private String word;
	private int count;
	
	public WordFrequency(String inWord, int inCount)
	{
		word = inWord;
		count = inCount;
	}
	
	public String getWord()
	{
		return word;
	}
	
	public void increment()
	{
		count++;
	}
	
	public String toString()
	{
		return word + " " + count;
	}
}