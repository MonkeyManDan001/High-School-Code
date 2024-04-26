import java.awt.Color;

public class Greeter 
{
	private String name;
	private Color color;
	
	public Greeter (String inName, Color inColor)
	{
		name = inName;
		color = inColor;
	}
	
	public String sayHello()
	{
		String message = name + " says hello!";
		return message;
	}
	
	public String sayGoodbye()
	{
		String message = name + " says goodbye!";
		return message;
	}
	
	public Color getColor()
	{
		return color;
	}
	
	public String getName()
	{
		return name;
	}
}