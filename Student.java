public class Student 
{
	private String firstName;
	private String lastName;
	private int studentIdNumber;
	private static int nextIdNumber = 0;
	
	public Student(String inFirst, String inLast)
	{
		firstName = inFirst;
		lastName = inLast;
		nextIdNumber++;
		studentIdNumber = nextIdNumber;
	}
	
	public static int getNumStudents()
	{
		return nextIdNumber;
	}
	
	public String toString()
	{
		return firstName + " " + lastName + " " + studentIdNumber;
	}
}
