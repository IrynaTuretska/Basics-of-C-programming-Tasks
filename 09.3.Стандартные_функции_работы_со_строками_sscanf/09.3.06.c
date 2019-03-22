/*
   9.3 Стандартные функции работы со строками.


   Счастливый билетик.
   Напишите программу проверки того, что число, записанное в строке, является номером счастливого билетика. Билет называется счастливым, если сумма первых трёх цифр номера билета равняется сумме последних трёх цифр номера билета.

   Входные данные:
   Одна строка, содержащая число.  Длина строки  6 символов.

   Выходные данные:
   yes если строка является номером счастливого билетика, no в противном случае.

   Sample Input 1:

   123204

   Sample Output 1:

   yes

   Sample Input 2:

   123456

   Sample Output 2:

   no

 */

#include <stdio.h>
#include <string.h>
#define N 8

int main() {
        char arr[N];

        int a = 0, b=0, c=0;

        fgets(arr,N, stdin);

        for(int i = 0; i < N-2; ++i)
                ++a;


        for(int i = 0; i < a/2; ++i)
                b = b-48 + (int)(arr[i]);
        for(int j = a/2; j < a; ++j)
                c = c-48 + (int)arr[j];

        if(b == c) {
                printf("yes");
        }else
                printf("no");

        return 0;
}

/*
 * better code
 *
 #include <stdio.h>

   int main() {
    char s[10]; fgets(s, 10, stdin);
    printf(s[0]+s[1]+s[2]==s[3]+s[4]+s[5] ? "yes" : "no");
   }
 */
