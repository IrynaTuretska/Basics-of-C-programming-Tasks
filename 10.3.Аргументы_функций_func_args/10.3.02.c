/*
   10.3 Аргументы функций
 #


   Написать функцию void sum_digits(int * x), которая заменяет число x на сумму цифр из которых состоит число x.

   Sample Input 1:

   12938

   Sample Output 1:

   23

   Sample Input 2:

   722

   Sample Output 2:

   11

   Sample Input 3:

   1

   Sample Output 3:

   1

 */


void sum_digits(int * x){
        int sum = 0;

        for(int i = *x; i > 0; i = (i/10)) {
                sum = sum + i%10;


        }

        *x = sum;
}

/*
 * better code
 *
   void sum_digits(int * x){
    int s = 0;
    while (*x != 0) {
        s += *x % 10; *x /= 10;
    }
 * x = s;
   }

 */
