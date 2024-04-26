public class Tiger extends Feline
{
	public Tiger(String name, String food)
	{
		super(name, food);
	}
	
	public void makeNoise()
	{
		System.out.println(getName() + " makes noise like a Tiger");
	}
	
	public void eat()
	{
		System.out.println(getName() + " eats " + getFood() + " like a Tiger");
	}
}
