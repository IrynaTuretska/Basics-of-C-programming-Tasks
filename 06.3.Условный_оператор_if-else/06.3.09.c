/*
   6.3 Условный оператор if-else

   Написать программу, которая анализирует данные о возрасте и относит человека к одной из четырех групп: дошкольник, школьник, рабочий, пенсионер.

   дошкольник <= 6
   7 <= школьник <= 18
   19 <= рабочий <= 59
   пенсионер >= 60

   Входные данные:
   Одно целое число -- возраст человека.

   Выходные данные:
   Одно слово. Название категории, к которой относится человек.

   Sample Input:

   33

   Sample Output:

   рабочий

 */

#include <stdio.h>
#include <locale.h>

int main(void) {
        setlocale(LC_ALL, "");

        int years;

        scanf("%d", &years);

        if(years <= 6) {
                printf("дошкольник");
                return 0;
        }

        if(years <= 18 && years >= 7) {
                printf("школьник");
                return 0;
        }

        if(years <= 59 && years >= 19) {
                printf("рабочий");
                return 0;
        }

        if(years >= 60) {
                printf("пенсионер");
                return 0;
        }

        return 0;
}

/*better code

 #include <stdio.h>

   int main() {
    int a;
    scanf("%d", &a);
    printf(a <= 6 ? "дошкольник" : a <= 18 ? "школьник" : a <= 59 ? "рабочий" : "пенсионер");
   }

 */
