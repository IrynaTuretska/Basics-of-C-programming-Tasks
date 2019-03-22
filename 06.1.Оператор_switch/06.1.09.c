/*
   6.1 Оператор switch
   12 из 12 шагов пройдено
   11 из 11 баллов  получено

   Для целого числа K
   (от 1 до 99 включительно) напечатать фразу «Мне K лет», учитывая при этом, что при некоторых значениях K

   слово «лет» надо заменить на слово «год» или «года». Например, 11 лет, 22 года, 51 год.

   Входные данные: Одно целое число K
   , 1≤k≤99


   Выходные данные: Фраза с правильным окончанием

   Подсказки:
   Не нужно писать switch с 99 ветками case. Работать, конечно, будет, но лучше подумать головой.
   Окончание почти всегда зависит только от последней цифры числа
   Используйте вложенные switch

   Sample Input:

   11

   Sample Output:

   Мне 11 лет

 */

#include <stdio.h>
#include <locale.h>

int main() {
        setlocale(LC_ALL, "RU");

        int a;

        scanf("%d",&a);

        if(a>=11 && a<=19)

                printf("Мне %d лет", a);
        else
                switch(a%10)
                {
                case 1: printf("Мне %d год", a); break;
                case 2: printf("Мне %d года",a); break;
                case 3: printf("Мне %d года",a); break;
                case 4: printf("Мне %d года",a); break;
                default: printf("Мне %d лет", a);
                }
        return 0;


}

/*better code

   «switch не нужен» =)

 #include <stdio.h>

   int main() {
    char *y[] = {"лет\0","год\0","года\0"};
    int k;
    scanf("%i", &k);
    printf("Мне %i %s\n", k, y[((k%10>0) + (k%10>1)) * !((k%10)>4 || (k>4 && k<21))]);
   }

 */
