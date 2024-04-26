public class Lion extends Feline
{
	public Lion(String name, String food)
	{
		super(name, food);
	}
	
	public void makeNoise()
	{
		System.out.println(getName() + " makes noise like a Lion");
	}
	
	public void eat()
	{
		System.out.println(getName() + " eats " + getFood() + " like a Lion");
	}
}
