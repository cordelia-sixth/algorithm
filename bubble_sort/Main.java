import java.util.*;

public class Main {
    public static void main(String[] args) throws Exception {
        int[] numbers = {1, 7, 3, 5};
        
        bubbleSort(numbers, numbers.length);
        bubbleSort2(numbers, numbers.length);
    }
    
    public static void bubbleSort(int[] numbers, int length) {
      int temp;
      
      for(int i = 0; i < length - 1; i++)
        for(int j = length - 1; j > i; j--)
          if(numbers[j - 1] > numbers[j]) {
            temp = numbers[j - 1];
            numbers[j - 1] = numbers[j];
            numbers[j] = temp;
          }
      
      System.out.println(Arrays.toString(numbers));
    }
    
    // 配列の先頭から走査する
    public static void bubbleSort2(int[] numbers, int length) {
      int temp;
      
      for(int i = 0; i < length - 1; i++)
        for(int j = i; j < length - 1; j++)
          if(numbers[j] > numbers[j + 1]) {
            temp = numbers[j];
            numbers[j] = numbers[j + 1];
            numbers[j + 1] = temp;
          }
      
      System.out.println(Arrays.toString(numbers));
    }
}
