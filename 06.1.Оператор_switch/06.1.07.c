/*
   6.1 Оператор switch

   Вычислить номер дня в невисокосном году по заданным числу и месяцу.

   Входные данные:
   Два целых числа. Первое число m
   -- номер месяца. 1≤m≤12
   Второе число d -- номер дня в месяце. 1≤d≤31

   Выходные данные:
   Одно целое число -- порядковый номер дня в невисокосном году.

   Sample Input 1:

   2 4

   Sample Output 1:

   35

   Sample Input 2:

   6 12

   Sample Output 2:

   163

 */
#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main(){

        int m, d;

        scanf("%d%d", &m,&d );


        switch(m) {

        case 1: printf("%d", d); break;
        case 2: printf("%d", 31 + d); break;
        case 3: printf("%d", 31+28 + d); break;
        case 4: printf("%d", 31+28+31 + d); break;
        case 5: printf("%d", 31+28+31+30 + d); break;
        case 6: printf("%d", 31+28+31+30+31 + d); break;
        case 7: printf("%d", 31+28+31+30+31+30 + d); break;
        case 8: printf("%d", 31+28+31+30+31+30+31 + d); break;
        case 9: printf("%d", 31+28+31+30+31+30+31+31 + d); break;
        case 10: printf("%d", 31+28+31+30+31+30+31+31+30 + d); break;
        case 11: printf("%d", 31+28+31+30+31+30+31+31+30+31 + d); break;
        case 12: printf("%d", 31+28+31+30+31+30+31+31+30+31+30 + d); break;
        default: printf("ERROR!\n"); break;

        }

        return 0;
}

/*better code

 #include <stdio.h>

   int main() {
    int a, b, c;
    scanf("%d %d", &a, &b);
    c = (a-1)*31+b;
    switch(a) {
        default: printf("%d", c); break;
        case 3:
        case 4: printf("%d", c-3); break;
        case 5:
        case 6: printf("%d", c-4); break;
        case 7:
        case 8:
        case 9: printf("%d", c-5); break;
        case 10:
        case 11: printf("%d", c-6); break;
        case 12: printf("%d", c-7);
    }
   }

 */
