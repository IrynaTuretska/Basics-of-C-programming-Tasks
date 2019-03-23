/*
   6.3 Условный оператор if-else


   Написать программу — модель анализа пожарного датчика в помещении, которая выводит сообщение Fire situation, если температура в комнате превысила 60 градусов по Цельсию.

   Входные данные:
   Одно целое число T

   -- температура в помещении.

   Выходные данные:
   Строка Fire situation, если T>60
   . В противном случае ничего выводить не нужно.

 */

#include <stdio.h>

int main(void) {

        int x;

        scanf("%d", &x);

        if ( x > 60) {

                printf("Fire situation");

        }else

                return 0;
}

/*better code
 #include <stdio.h>

   int main() {
    int t;
    scanf("%d", &t);
    if (t > 60) printf("Fire situation");
   }
 */
