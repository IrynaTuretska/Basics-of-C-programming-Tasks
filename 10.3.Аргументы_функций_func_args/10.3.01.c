/*
   10.3 Аргументы функций



   Написать функцию void swap(int * x, int * y), которая меняет значения переменных местами.

   Sample Input:

   2 0

   Sample Output:

   0 2

 */

void swap(int * a, int * b){
        int tmp;
        tmp = *a;
        *a = *b;
        *b = tmp;

}


/*
 * better code
 *
   void swap(int * a, int * b){
    int t = *a;
 * a = *b;
 * b = t;
   }
 */
