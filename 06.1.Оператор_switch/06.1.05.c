/*
   6.1 Оператор switch

   Усовершенствуйте программу, написанную на прошлом шаге. Теперь она должна работать для любых целых чисел, включая случай, когда b=0

   .

   Входные данные:
   Два целых числа a
   , b и символ действия c

   .

   Выходные данные:
   Одно вещественное число, либо строку ERROR!, если введено недопустимое действие или действие выполнить невозможно. Формат вывода чисел: два знака после запятой.

   Подсказки:
   используйте вложенные оператор switch

   Sample Input:

   45 23 +

   Sample Output:

   68.00

 */
#include <stdio.h>
#include <locale.h>

int main() {
        setlocale(LC_ALL, " ");

        int a, b;
        char c;

        scanf("%d%d %c", &a, &b, &c);

        if (b*0==0) {

                switch (c) {

                case '+': printf("%.2f", (float)a+b); break;
                case '-': printf("%.2f", (float)a-b); break;
                case '*': printf("%.2f", (float)a*b); break;
                case '/':
                        switch (b>0) {
                        case 0: printf("ERROR!\n"); break;
                        case 1: printf("%.2f", (float)a/b); break;
                        }
                        break;




                default: printf("ERROR!\n"); break;
                }
        }
        else

                printf("ERROR!\n");

        return 0;
}

/*better code

 #include <stdio.h>

   int main() {
    int a, b; char c;
    scanf("%d %d %c", &a, &b, &c);
    if (b == 0 && c == '/') {
        printf("ERROR!");
    } else {
    switch(c) {
        case '+' : printf("%.2lf", (double)a+b); break;
        case '-' : printf("%.2lf", (double)a-b); break;
        case '*' : printf("%.2lf", (double)a*b); break;
        case '/' : printf("%.2lf", (double)a/b); break;
        default : printf("ERROR!"); break;
    }
    }
   }

 */
