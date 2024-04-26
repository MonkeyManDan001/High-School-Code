//Dan Mine Period 1
import java.util.Scanner;

public class InterfaceDriver
{
	public static void main(String[] args)
	{
		Stack dataStructure = null;
	
		Utility.displayDataStructureMenu();
		String choice = Utility.getChoice("1 2 3");

		if (choice.equals("1"))
			dataStructure = new MyArrayStack();
		else if (choice.equals("2"))
			dataStructure = new MyArrayListStack();
		else if (choice.equals("3"))
			dataStructure = new MyMatrixStack();

		GenericStack myStack = new GenericStack(dataStructure);
		myStack.run();
	
	}
}