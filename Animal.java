public abstract class Animal 
{
	private String name;
	private String food;
	private int hunger;
	
	public Animal()
	{
		initialize("Generic Animal", "Generic Food");
	}
	
	public Animal(String inName, String inFood)
	{
		initialize(inName, inFood);
	}
	
	private void initialize(String inName, String inFood)
	{
		name = inName;
		food = inFood;
		hunger = 5;
	}
	
	public String getName()
	{
		return name;
	}
	
	public String getFood()
	{
		return food;
	}
	
	public void makeNoise()
	{
		System.out.println(name + " makes noise like an Animal");
	}
	
	public abstract void eat();
	
	public void sleep()
	{
		System.out.println(name + " sleeps like an Animal");
	}
	
	public void roam()
	{
		System.out.println(name + " roams like an Animal");
	}
}
