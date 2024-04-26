public class MyTester 
{
	public static void main(String[] args)
	{
		MyCalculations theObject = new MyCalculations();
		
		//theObject.add(5);
		
		//System.out.println(theObject.getSum());
		
		int start = 1;
		int end = 5;
		
		while(start <= end)
		{
			theObject.add(start);
			start++;
		}
		
		int theAnswer = theObject.getSum();
		System.out.println(theAnswer);

		int product = MyCalculations.getProduct(3, 4);
		System.out.println("The product is: " + product);
	}
}
