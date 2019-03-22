/*10.3 Аргументы функций



   Напишите функцию int minmax(int arr[], int n, int fl), которая возвращает максимальный или минимальный элемент массива arr, в зависимости от значения флага fl. 0 -- минимум, 1 -- максимум.

   Sample Input:

   5
   10 -93 22 75 12
   1

   Sample Output:

   75

 */

#include <stdio.h>

int minmax(int arr[], int n, int fl){
        int a = arr[0];
        if( fl == 1) {
                for(int i=0; i < n; ++i) {
                        if(arr[i] > a)
                                a = arr[i];
                }
                return(a);
        }

        if(fl == 0) {
                for(int i=0; i < n; ++i) {
                        if(arr[i] < a)
                                a = arr[i];
                }
                return(a);

        }

}

/*better code

   int minmax(int arr[], int n, int fl){
    int m = 1000, x = -1000;
    for (int i = 0; i < n; i++) {
        m = arr[i] < m ? arr[i] : m;
        x = arr[i] > x ? arr[i] : x;
    }
    return fl == 0 ? m : x;
   }
 */
