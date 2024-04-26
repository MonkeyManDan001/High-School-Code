public class Wolf extends Canine
{
	public Wolf(String name, String food)
	{
		super(name, food);
	}
	
	public void makeNoise()
	{
		System.out.println(getName() + " makes noise like a Wolf");
	}
	
	public void eat()
	{
		System.out.println(getName() + " eats " + getFood() + " like a Wolf");
	}
}
