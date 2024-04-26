public class Dog extends Canine
{
	public Dog(String name, String food)
	{
		super(name, food);
	}
	
	public void makeNoise()
	{
		System.out.println(getName() + " makes noise like a Dog");
	}
	
	public void eat()
	{
		System.out.println(getName() + " eats " + getFood() + " like a Dog");
	}
}
