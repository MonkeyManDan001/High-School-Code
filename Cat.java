public class Cat extends Feline
{
	public Cat(String name, String food)
	{
		super(name, food);
	}
	
	public void makeNoise()
	{
		System.out.println(getName() + " makes noise like a Cat");
	}
	
	public void eat()
	{
		System.out.println(getName() + " eats " + getFood() + " like a Cat");
	}
}
