/*
   6.1 Оператор switch

   Написать программу, позволяющую получить словесное описание школьных отметок (1 — «плохо», 2 — «неудовлетворительно», 3 — «удовлетворительно», 4 — «хорошо», 5 — «отлично»).

   Входные данные: Одно целое число k

   от 1 до 5.

   Выходные данные:
   Соответствующая k

   текстовое описание отметки.

   Sample Input:

   2

   Sample Output:

   неудовлетворительно

 */

#include <stdio.h>
#include <locale.h>

int main(void) {
        setlocale(LC_ALL, "");

        char school_rate;

        //printf("словесное описание школьных отметок: ");

        scanf("%c",&school_rate);

        switch (school_rate) {
        case '1': printf("плохо\n"); break;
        case '2': printf("неудовлетворительно\n"); break;
        case '3': printf("удовлетворительно\n"); break;
        case '4': printf("хорошо\n"); break;
        case '5': printf("отлично\n"); break;
        default:  printf("ERROR!\n"); break;
        }

        return 0;
}

/*better code
 #include <stdio.h>
   int main(){
   char *s[] = {"плохо\0", "неудовлетворительно\0", "удовлетворительно\0", "хорошо\0", "отлично\0"};
   int k;
   scanf("%i", &k);
   if (k >= 1 && k <= 5){
      puts(s[k-1]);
   }
   }
 */
