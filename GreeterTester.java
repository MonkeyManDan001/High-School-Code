import java.awt.Color;

public class GreeterTester 
{
	public static void main(String[] args)
	{
		Greeter person1 = new Greeter ("Mike", Color.BLUE);
		Greeter person2 = new Greeter ("Jane", Color.RED);
		
		System.out.println(person1.sayHello());
		System.out.println(person2.sayHello());
		
		System.out.println(person1.getName() + "'s favorite color: " + person1.getColor());
		System.out.println(person2.getName() + "'s favorite color: " + person2.getColor());
		
		System.out.println(person1.sayGoodbye());
		System.out.println(person2.sayGoodbye());
	}
}