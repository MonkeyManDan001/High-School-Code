public abstract class Canine extends Animal
{
	public Canine(String name, String food)
	{
		super(name, food);
	}
	
	public void roam()
	{
		System.out.println(getName() + " is roaming like an Canine");
	}
	
	public abstract void eat();
}
