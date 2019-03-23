/*
   6.3 Условный оператор if-else


   Даны три числа. Подсчитать количество положительных среди этих чисел.

   Входные данные:
   Три целых числа a,b,c

   .

   Выходные данные:
   Одно целое число -- количество положительных чисел, среди чисел a,b,c

   .

   Sample Input:

   79 -18 88

   Sample Output:

   2

 */

#include <stdio.h>

int main(void) {

        int a, b, c, Ax=0,Bx=0,Cx=0;

        scanf("%d%d%d",&a,&b, &c);


        if ( a >= 0) {

                Ax=Ax+1;
        }

        if (b >= 0) {

                Bx=Bx+1;
        }

        if (c >= 0) {

                Cx=Cx+1;

        }


        printf("%d", Ax+Bx+Cx);

        return 0;
}

/*better code
 #include <stdio.h>

   int main() {
    int a, b, c, d = 0;
    scanf("%d %d %d", &a, &b, &c);
    if (a > 0) d++;
    if (b > 0) d++;
    if (c > 0) d++;
    printf("%d", d);
   }
 */
