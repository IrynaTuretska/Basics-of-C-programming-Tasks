/*


Расстояние Хэмминга.
Расстояние Хэмминга для двух слов одинаковой длины — это количество позиций, в которых различаются эти слова. Для двух заданных строк найти расстояние между ними.

Входные данные:
Две символьные строки одинаковой длины, записанные каждая на отдельной строке. Длины строк не превышают 13.

Выходные данные:
Одно целое число -- расстояние Хэмминга.

Sample Input:

YoungCoder.ru
youngcoder.ru

Sample Output:

2

*/

#include  <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char str1[15] = "";
    char str2[15] = "";

    fgets (str1, 15, stdin);
    fgets (str2, 15, stdin);

    int a = 0;
    int i, j;

    for (i = 0, j = 0; i<strlen(str1), j<strlen(str2) ; i++,j++)
       {
          if (str1[i] != str2[j] ) ++a;

       }

    printf("%d", a);
}

/*
 * better code
 *
#include <stdio.h>

int main() {
    
   char str[20]; char str1[20]; int i=0,s=0;
   fgets(str,20,stdin);
   fgets(str1,20,stdin);
   
   while( str[i] != '\0' && str1[i] != '\0')
   {
       if (str[i] != str1[i]) s++;
       i++;
   }
    
    printf("%d",s);
}

*/
