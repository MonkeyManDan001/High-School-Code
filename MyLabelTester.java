//Dan Mine
public class MyLabelTester 
{
	public static void main(String[] args)
	{
		MyLabel person1 = new MyLabel ("John","Smith","Toms River High School North");
		MyLabel person2 = new MyLabel ("Lisa","Brown","Toms River High School East");
		
		System.out.println(person1.getFirst() + " " + person1.getLast());
		System.out.println(person1.getSchool());
		
		System.out.println("\n" +person2.getFirst() + " " + person2.getLast());
		System.out.println(person2.getSchool());
	}
}

/*
	John Smith
	Toms River High School North

	Lisa Brown
	Toms River High Sbchool East
*/