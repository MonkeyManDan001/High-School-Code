import java.util.ArrayList;
public class AnimalTester 
{
	public static void main(String[] args) 
	{
		ArrayList <Animal> animals = new ArrayList <Animal>();
		
		animals.add(new Lion("Simba the Lion","Lion Tamer"));
		animals.add(new Hippo("Happy Hippo","marbles"));
		animals.add(new Tiger("Tony the Tiger","Frosted Flakes"));
		animals.add(new Cat("Garfield the Cat","Mighty Mouse"));
		animals.add(new Dog("Spot the Dog","Bone"));
		animals.add(new Wolf("Big Bad Wolf","Sheep"));
		
		for(int i = 0; i < animals.size(); i++)
		{
			animals.get(i).eat();
			System.out.println();
		}
	}
}
