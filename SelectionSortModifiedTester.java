public class SelectionSortModifiedTester 
{
    public static void main(String[] args)  
    {
        int[] array1 = {5, 2, 3, 0, 1};
        System.out.print("ORIGINAL:\t");
        SelectionSortModified.displayArray(array1);
        SelectionSortModified.selectionSort(array1);
        System.out.println();

        int[] array2 = {0, 1, 2, 3, 4, 5, 6, 7};
        System.out.print("ORIGINAL:\t");
        SelectionSortModified.displayArray(array2);
        SelectionSortModified.selectionSort(array2);
        System.out.println();
        
        int[] array3 = {5, 2, 3, 0, 1, 4};
        System.out.print("ORIGINAL:\t");
        SelectionSortModified.displayArray(array3);
        SelectionSortModified.selectionSort(array3);
        System.out.println();
        
        int[] array4 = {7, 6, 5, 4, 3, 2, 1, 0};
        System.out.print("ORIGINAL:\t");
        SelectionSortModified. displayArray(array4);
        SelectionSortModified.selectionSort(array4);
        System.out.println();
        
    }
}