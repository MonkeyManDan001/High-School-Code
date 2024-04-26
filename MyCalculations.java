public class MyCalculations 
{
	private int runningSum;
	
	public MyCalculations()
	{
		runningSum = 0;
	}
	
	public void add(int theNumber)
	{
		runningSum = runningSum + theNumber;
	}
	
	public int getSum()
	{
		return runningSum;
	}
	
	public static int getProduct(int first, int second)
	{
		return first * second;
	}
}
