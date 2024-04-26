public class Book
{
	private String title;
	private int totalPages;
	
	public Book (String inTitle, int inPages)
	{
		title = inTitle;
		totalPages = inPages;
	}
	
	public Book(String inTitle)
	{
		title = inTitle;
		totalPages = 0;
	}
	
	public String getTitle()
	{
		return title;
	}
	
	public void setTotalPages(int inPages)
	{
		totalPages = inPages;
	}
	
	public int getTotalPages()
	{
		return totalPages;
	}
}