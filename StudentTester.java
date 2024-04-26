public class StudentTester 
{
	public static void main(String[] args)
	{
		Student s1 = new Student("Jane","Doe");
		Student s2 = new Student("John","Smith");
		Student s3 = new Student("Alex","Spencer");
		Student s4 = new Student("Sam","Brown");
		Student s5 = new Student("Bella","Satten");
		
		System.out.println(s1);
		System.out.println(s2);
		System.out.println(s3);
		System.out.println(s4);
		System.out.println(s5);
		System.out.println("Number of students in the school: " + Student.getNumStudents());
	}
}
