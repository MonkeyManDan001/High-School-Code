import java.util.ArrayList;
public class InsertionSortModifiedTester
{
    public static void main(String[] args) 
    {
        //TEST CASE #1
        System.out.println("\nTEST CASE #1");
        ArrayList<Integer> list1 = new ArrayList<Integer>( );
        list1.add(1);
        list1.add(2);
        list1.add(3);
        list1.add(4);
        list1.add(5);
        System.out.print("BEFORE: ");
        System.out.println(list1);
        InsertionSortModified.insertWithBinarySrch(list1);
        System.out.print("AFTER:  ");
        System.out.println(list1);

        //TEST CASE #2
        System.out.println("\nTEST CASE #2");
        list1 = new ArrayList<Integer>( );
        list1.add(3);
        list1.add(1);
        list1.add(2);
        list1.add(4);
        list1.add(5);
        System.out.print("BEFORE: ");
        System.out.println(list1);
        InsertionSortModified.insertWithBinarySrch(list1);
        System.out.print("AFTER:  ");
        System.out.println(list1);

        //TEST CASE #3
        System.out.println("\nTEST CASE #3");
        list1 = new ArrayList<Integer>( );
        list1.add(5);
        list1.add(4);
        list1.add(3);
        list1.add(2);
        list1.add(1);
        System.out.print("BEFORE: ");
        System.out.println(list1);
        InsertionSortModified.insertWithBinarySrch(list1);
        System.out.print("AFTER:  ");
        System.out.println(list1);

        //TEST CASE #4
        System.out.println("\nTEST CASE #4");
        list1 = new ArrayList<Integer>( );
        list1.add(2);
        list1.add(4);
        list1.add(3);
        list1.add(5);
        list1.add(1);
        System.out.print("BEFORE: ");
        System.out.println(list1);
        InsertionSortModified.insertWithBinarySrch(list1);
        System.out.print("AFTER:  ");
        System.out.println(list1);

        //TEST CASE #5
        System.out.println("\nTEST CASE #5");
        list1 = new ArrayList<Integer>( );
        list1.add(2);
        list1.add(3);
        list1.add(5);
        list1.add(4);
        list1.add(1);
        System.out.print("BEFORE: ");
        System.out.println(list1);
        InsertionSortModified.insertWithBinarySrch(list1);
        System.out.print("AFTER:  ");
        System.out.println(list1);

        //TEST CASE #6
        System.out.println("\nTEST CASE #6");
        list1 = new ArrayList<Integer>( );
        list1.add(1);
        list1.add(5);
        list1.add(2);
        list1.add(4);
        list1.add(3);
        System.out.print("BEFORE: ");
        System.out.println(list1);
        InsertionSortModified.insertWithBinarySrch(list1);
        System.out.print("AFTER:  ");
        System.out.println(list1);
      
    }
}