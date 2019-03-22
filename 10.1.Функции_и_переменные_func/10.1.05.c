/*
   10.1 Функции и переменные




   Число сочетаний.
   Допустим, у вас имеется N
   хоккеистов. Из них нужно сформировать команду из K

   человек. Сколько существует вариантов это сделать? На подобные вопросы существует стандартный ответ -- число сочетаний, которое вычисляется по следующей формуле:
   Сkn=n!k!(n−k)!
   Например, N=5,K=3, то
   С35=5!3!(2)!=1206⋅2=10

   Входные данные:
   Натуральное число N
   и целое неотрицательное число K,(K<N),N<12

   .

   Выходные данные:
   Одно число - количество сочетаний хоккеистов.

   Подсказки:
   Необходимо написать две функции: factorial(p) и combin(n,k).

   Sample Input 1:

   3 1

   Sample Output 1:

   3

   Sample Input 2:

   3 0

   Sample Output 2:

   1

   Sample Input 3:

   4 2

   Sample Output 3:

   6

 */

#include <stdio.h>

int factorial(int);

int factorial(int p){
        int n=1, i;

        for(i=1; i<= p; i++) n*=i;
        return n;

}
int combin(int n, int k){
        int c, nk;

        nk = n - k;

        c = factorial(n) / (factorial(k) * factorial(nk));

        return c;
}

int main(void){
        int n = 0, k = 0, nk = 0;
        scanf("%d%d",&n,&k);


        //printf("%d\n%d\n%d\n", nk, n, k);
        printf("%d",combin(n,k));

        return 0;
}

/*
 * better code
 *
 #include<stdio.h>
   int factorial(int p){
    return p <= 1 ? 1 : p*factorial(p-1);
   }
   int combin(int n, int k){
    return (int) factorial(n)/(factorial(k)*factorial(n-k));
   }

   int main(void){
    int n, k;
    scanf("%d%d",&n,&k);
    printf("%d",combin(n,k));
   }
 */
