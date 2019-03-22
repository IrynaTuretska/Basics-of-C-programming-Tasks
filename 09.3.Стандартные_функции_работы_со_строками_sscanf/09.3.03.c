/*
   9.3 Стандартные функции работы со строками.


   Города
   Определить можно ли из указанных слов составить цепочку для игры в "Города". Т.е. либо первая буква второго слова совпадает с последней буквой первого слова, либо наоборот. Названия городов, как и полагается, записаны с заглавной буквы.

   Входные данные:
   Две символьных строки, записанные каждая с новой строки.  Длина строк не более 50 символов.

   Выходные данные:
   yes -- если из указанных слов можно составить цепочку для игры в "Города", no -- в противном случае.

   Sample Input 1:

   Vologda
   Astana

   Sample Output 1:

   yes

   Sample Input 2:

   Omsk
   Karaganda

   Sample Output 2:

   yes

 */

#include <stdio.h>
#include <string.h>


int main()
{
        char str1[50];
        char str2[50];

        fgets(str1,50, stdin);
        fflush(stdin);
        fgets(str2, 50, stdin);

        for(int i = 0; i < strlen(str1); ++i)
                for(int j = 0; j < strlen(str2); ++j) {
                        if(str1[strlen(str1)-2] == str2[0] || str1[strlen(str1)-2] == str2[0]+32) {
                                printf("yes");
                                return 0;

                        }else if(str2[strlen(str2)-2] == str1[0] || str2[strlen(str2)-2] == str1[0]+32) {
                                printf("yes");
                                return 0;
                        }else printf("no");
                        return 0;
                }
        return 0;
}

/*
 * better code

 #include <stdio.h>

   int main() {
    char s[100], s1[100];
    gets(s); fflush(stdin); gets(s1);
    printf(s[strlen(s)-1] == s1[0] + 32 ? "yes" : "no");
   }
 */
