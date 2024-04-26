import java.util.ArrayList;
public class WordList
{
	ArrayList <WordFrequency> arrayList;
	
	public WordList()
	{
		arrayList = new ArrayList <WordFrequency>();
	}
	
	public void addToLog(String theWord)
	{
		int index = getIndex(theWord);
		
		if (arrayList.size() == 0 || index >= arrayList.size())
		{
			arrayList.add(new WordFrequency(theWord,1));
		}
		else
		{
			if(theWord.equals(arrayList.get(index).getWord()))
			{
				arrayList.get(index).increment();
			}
			else
			{
				arrayList.add(index,new WordFrequency(theWord, 1));
			}
		}
	}
	
	public int getIndex(String theWord)
	{
		int index = 0;
		
		while(index < arrayList.size() && theWord.compareTo(arrayList.get(index).getWord()) > 0)
		{
			index++;
		}
		return index;
	}
	
	public String toString()
	{
		String output = "";
		
		for(int i = 0; i < arrayList.size(); i++)
		{
			output += arrayList.get(i) + "\n";
		}
		
		return output;
	}
}