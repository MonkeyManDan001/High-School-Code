import java.util.ArrayList;
public class DataStorage
	{
		private ArrayList <String> array;
		
		public DataStorage()
		{
			array = new ArrayList <String>();
		}

		public int size()
		{
			return array.size();
		}

		public boolean add(String theData)
		{
			return array.add(theData);
		}

		public void add(int index, String theData)
		{
			array.add(index, theData);
		}
		
		public String get(int index)
		{
			return array.get(index);
		}
		
		public String set(int index, String theData)
		{
			return array.set(index, theData);
		}
		
		public String remove(int index)
		{
			return array.remove(index);
		}
		
		public void removeAll(String theString)
		{
			int index = 0;
			
			do
			{
				if(array.get(index).compareTo(theString) == 0)
				{
					array.remove(index);
				}
				else
				{	
					index++;
				}
			}while (index < array.size());
		}
		
		public void reverseContents()
		{
			int size = array.size();
			
			for(int i = 0; i < size / 2; i++)
			{
				String holder = array.get(i);
				
				array.set(i, array.get(size - i - 1));
				array.set(size - i - 1, holder);
			}
		}
		
		public String toString()
		{
			return array.toString();
		}
}