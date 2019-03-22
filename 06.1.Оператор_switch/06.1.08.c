/*
   6.1 Оператор switch

   Напишите программу считающую произведение цифр заданного k
   -значного числа X

   .

   Входные данные: Два целых числа.
   Первое число k
   -- количество цифр в числе X. 1≤k≤4
   Второе число X. Некоторое k

   -значное число.

   Выходные данные:
   Целое число. Произведение цифр числа X

   .

   Sample Input:

   2 48

   Sample Output:

   32

 */

#include <stdio.h>
int main(){
        int k, n;

        scanf("%d%d",&k,&n);

        switch(k) {
        case 1: printf("%d", n); break;
        case 2: printf("%d", (n/10)*(n%10)); break;
        case 3: printf("%d", (n/100)*(n/10%10)*(n%10)); break;
        case 4: printf("%d", (n/1000)*(n/100%10)*(n/10%10)*(n%10)); break;
        default: printf("ERROR!\n"); break;



        }
        return 0;


}

/*better code

 #include <stdio.h>

   int main() {
    int k, x;
    scanf("%d %d", &k, &x);
    switch(k) {
        case 1: printf("%d", x); break;
        case 2: printf("%d", (x/10)*(x%10)); break;
        case 3: printf("%d", (x/100)*(x/10%10)*(x%10)); break;
        case 4: printf("%d", (x/1000)*(x/100%10)*(x/10%10)*(x%10));
    }
   }

 */
