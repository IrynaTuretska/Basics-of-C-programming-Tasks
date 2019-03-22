i/*
    6.1 Оператор switch

    Гадание.
    Написать программу, определяющую результат гадания на ромашке по количеству лепестков на ней.

    Входные данные:
    Одно целое число k

    -- количество лепестков на ромашке.

    Выходные данные:
    Одна строка в зависимости от результата: Любит или Не любит.

    Подсказки:
    Отрывая первый лепесток, произносится фраза "Любит".

    Sample Input:

    23

    Sample Output:

    Любит




  */

#include <stdio.h>
#include <locale.h>
int main() {
        setlocale(LC_ALL, "");

        int number;
        scanf("%d", &number);

        switch (number%2) {
        case 1: printf("Любит"); break;
        case 0: printf("Не любит"); break;
        }
        return 0;
}

/*better code

   «switch не нужен», ч.2

 #include <stdio.h>
   int main(){
    char *s[] = {"Не любит\0", "Любит\0"};
    int k;
    scanf("%i", &k);
    puts(s[k&1]);
   }

 */
