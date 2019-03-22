/*
   9.3 Стандартные функции работы со строками.


   Сравнение строк
   Даны две строки. Необходимо сравнить строки между собой с учётом регистра символов.

   Входные данные:
   Две символьных строки, записанные каждая с новой строки. Длина строк не более 50 символов.

   Выходные данные:
   yes если строки полностью совпадают, no в противном случае.

   Sample Input:

   stepik
   Stepik

   Sample Output:

   no



 */

#include <stdio.h>
#include <string.h>


int main()
{
        char str1[50];
        char str2[50];
        int i, j;

        fgets(str1,50, stdin);
        fflush(stdin);
        fgets(str2, 50, stdin);

        for(i = 0, j = 0; i < strlen(str1) && j < strlen(str2); ++i, ++j)
                if(str1[i] != str2[j]) {
                        printf("no");
                        return 0;
                }
        printf("yes");

        return 0;
}

/*
 * better code
 *
 #include <stdio.h>
 #include <string.h>

   int main() {
    char s[100], s1[100];
    gets(s); fflush(stdin); gets(s1);
    printf(strcmp(s, s1) ? "no" : "yes");
   }
 */
