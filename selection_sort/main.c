#include <stdio.h>
int main(void){
   int numbers[] = {7, 3, 1, 5};
   int arr_length = 4;
   int i, j, temp, min;
   
   for(i = 0; i < arr_length; i++){
     min = i;
     for(j = i + 1; j < arr_length; j++) {
       if(numbers[min] > numbers[j]) {
         min = j;
       }
     }
     temp = numbers[i];
     numbers[i] = numbers[min];
     numbers[min] = temp;
   }

   for(int i = 0; i < arr_length; i++) {
     printf("%d ", numbers[i]);
   }
}
