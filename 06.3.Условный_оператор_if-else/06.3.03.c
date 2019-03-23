/*
   6.3 Условный оператор if-else

   Написать программу проверяющую, является ли правильной дробь AB

   .

   Входные данные:
   Два натуральных числа A,B

   .

   Выходные данные:
   Строка yes, если дробь правильная, строка no в противном случае.

   Sample Input:

   84 47

   Sample Output:

   no

 */

#include <stdio.h>

int main(void) {

        int A, B;

        scanf("%d%d",&A,&B);


        if ( A >= B) {

                printf("no");

        }else printf("yes");


        return 0;
}

/*better code
 #include <stdio.h>

   int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    if (a < b) printf("yes"); else printf("no");
   }
 */
