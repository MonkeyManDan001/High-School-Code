public class Hippo extends Animal
{
	private String foundName;
	
	public Hippo(String name, String food)
	{
		super(name, food);
		foundName = "The International Hippo Foundation";
	}
	
	public String getFoundName()
	{
		return foundName;
	}
	
	public void makeNoise()
	{
		System.out.println(getName() + " makes noise like a Hippo");
		super.makeNoise();
	}
	
	public void eat()
	{
		System.out.println(getName() + " eats " + getFood() + " like a Hippo");
	}
}
