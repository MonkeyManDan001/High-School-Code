public class BookTester 
{
	public static void main(String[] args)
	{
		Book book1 = new Book ("The Last Lecture");
		Book book2 = new Book ("Wings of Fire", 200);
		book1.setTotalPages (100);
		
		String title1 = book1.getTitle();
		System.out.println(title1);
		
		int pages1 = book1.getTotalPages();
		
		System.out.println(pages1);
		
		System.out.println(book2.getTitle() + " " + book2.getTotalPages());
	}
}
