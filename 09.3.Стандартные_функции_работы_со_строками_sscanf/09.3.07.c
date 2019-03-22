/*

   9.3 Стандартные функции работы со строками.
   7 из 10 шагов пройдено
   6 из 9 баллов  получено
   Вы прошли больше 80% курса, оставьте отзыв


   Написать программу, проверяющую, можно ли из букв, входящих в первую строку, составить вторую строку. (буквы можно использовать не более одного раза и можно переставлять)

   Входные данные:
   Две символьных строки, записанные каждая с новой строки. Длина строк не более 50 символов. Строки состоят только из строчных букв латинского алфавита.

   Выходные данные:
   yes -- если из букв первой строки, можно составить вторую строку, no -- в противном случае.

   Sample Input 1:

   zaza
   baka

   Sample Output 1:

   no

   Sample Input 2:

   integral
   agent

   Sample Output 2:

   yes



 */

#include <stdio.h>
#include <string.h>
#define N 50

int
main ()
{
        char arr1[N];
        char arr2[N];

        int a = 0, b = 0, c = 0;
        int len1 = 0, len2 = 0;

        fgets (arr1, N, stdin);
        fgets (arr2, N, stdin);

        len1 = strlen(arr1);
        len2 = strlen(arr2);


        for (int i = 0; i < len2; ++i) {
                for (int j = 0; j < len1; ++j) {
                        if (arr1[i] == arr2[j]) {
                                ++a; break;
                        }
                        //printf("\n%d %d %d %d",a, b, len1, len2);
                }
        }

        printf(a == strlen(arr1) ? "yes" : "no");



        return 0;
}

/*
 * better code
 *
 #include <stdio.h>

   int main() {
    char s[100], s1[100]; int k = 0;
    gets(s); fflush(stdin); gets(s1);
    for (int i = 0; i < strlen(s1); i++) {
        for (int j = 0; j < strlen(s); j++) {
            if (s[j]==s1[i]) {
                k++;
                break;
            }
        }
    }
    printf(k == strlen(s1) ? "yes" : "no");
   }
 */
