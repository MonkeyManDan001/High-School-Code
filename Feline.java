public abstract class Feline extends Animal
{
	public Feline(String name, String food)
	{
		super(name, food);
	}
	
	public void roam()
	{
		System.out.println(getName() + " is roaming like an Feline");
	}
	
	public abstract void eat();
}
