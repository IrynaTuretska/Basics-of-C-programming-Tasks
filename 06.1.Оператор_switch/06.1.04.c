/*
   6.1 Оператор switch

   Напишите программу-калькулятор для четырёх основных арифметических действий.

   Входные данные:
   Символ действия c
   и два целых числа a, b (b!=0)

   Выходные данные:
   Одно вещественное число, либо строку ERROR!, если введено недопустимое действие. Формат вывода чисел: два знака после запятой.

   Sample Input:

 + 45 23

   Sample Output:

   68.00

 */
#include <stdio.h>
#include <locale.h>

int main() {
        setlocale(LC_ALL, " ");

        float a, b;
        char c;

        scanf("%c%f%f",&c, &a, &b);

        if (b != 0) {

                switch (c) {

                case '+': printf("%.2f", a+b); break;
                case '-': printf("%.2f", a-b); break;
                case '*': printf("%.2f", a*b); break;
                case '/': printf("%.2f", a/b); break;
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
    scanf("%c %d %d", &c, &a, &b);
    switch(c) {
        case '+' : printf("%.2lf", (double)a+b); break;
        case '-' : printf("%.2lf", (double)a-b); break;
        case '*' : printf("%.2lf", (double)a*b); break;
        case '/' : printf("%.2lf", (double)a/b); break;
        default : printf("ERROR!"); break;
    }
   }

 */
