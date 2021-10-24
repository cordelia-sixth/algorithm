#include <stdio.h>
int main(void){
   int numbers[] = {7, 3, 1, 5};
   int arr_length = 4;
   int i, j, temp;
   
  // 外側forで走査対象の配列を制御
  // while制御用かつ比較する要素のインデックス変数を定義
  // whileで2値を比較、入れ替え
   
   for(i = 1; i < arr_length; i++) { // 要素数分だけ走査
     j = i; // 制御用変数
     while((j > 0) && (numbers[j - 1] > numbers[j])) {
       temp = numbers[j - 1];
       numbers[j - 1] = numbers[j];
       numbers[j] = temp;
       j--;
     }
   }
   
   
   for(int i = 0; i < arr_length; i++) {
     printf("%d ", numbers[i]);
   }
}
