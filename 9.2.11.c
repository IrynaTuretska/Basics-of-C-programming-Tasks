/*
9.2 Символьные строки
  

Дана строка. Найти в ней слова, которые начинаются и оканчиваются одной и той же буквой. Слова разделяются пробелами.

Входные данные:
Символьная строка

Выходные данные:
Вывести из строки слова, которые начинаются и заканчиваются одной и той же буквой. Выводить в том же порядке, в котором они встречаются в исходной строке.

Sample Input:

youngcoder.ru tnt and ten fiaif ug.ru

Sample Output:

tnt fiaif ug.ru 

*/
#include <stdio.h>
#include <string.h>

int main()
{
    int i, start=0, stop=0;
    char c, str[100];

    fgets(str, 100, stdin);

    for (i=0; i<(strlen(str)-1); i++)
    {
        if (str[i]!=' ')
        {
            if ((i==0)||(str[i-1]==' '))
            {
                start = i;
            }

            if ((str[i+1]=='\n')||(str[i+1]==' '))
            {
                stop = i;
            }

            if ((str[start]==str[stop])&&(stop-start>0))
            {
                printf("%.*s ", stop-start+1, str+start);
            }
        }
    }
return 0;
}
/*
 * better code
 *
#include <stdio.h>

int main() {
    char s[100], s1[100]; int b = 0, e = 0;
    gets(s);
    for (int i = 0; i < strlen(s); i++) {
        if (i == 0 || s[i-1] == ' ') b = i;
        if (s[i+1] == ' ' || i == strlen(s)-1) e = i;
        if (s[b] == s[e] && b != e) {
            for (int j = b; j <= e; j++) {
                printf("%c", s[j]);
            }
            printf(" ");
            b = 0; e = 0;
        }
    }
}
*/
