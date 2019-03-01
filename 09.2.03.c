/*
 

Поиск символа
Найти в строке заданный символ.

Входные данные:
Первая строка -- символ, который необходимо найти. Максимальная длина строки 100 символов. Затем с новой строки записана символьная строка, в которой нужно осуществить поиск.

Выходные данные:
Одно целое число -- позиция первого вхождения искомого символа в во входную строку или число -1, если символ не найден.

Подсказки:
Символы в строке нумеруются с нуля.

Sample Input 1:

d
YoungCoder.Ru 2014 - 2017

Sample Output 1:

7

Sample Input 2:

d
Happy New Year! 2018

Sample Output 2:

-1

*/

#include <stdio.h>

int main()
{
    char h;
    char str1[100];
    int c = 0;

    scanf("%c\n", &h);

    fgets(str1, 100, stdin);

    for(int i = 0; c != 10; ++i){
        c = str1[i];

        if(str1[i] == h){
        printf("%d", i);
        return 0;

        }

  }

    printf("%d", -1);
    return 0;
}

/*
 * better code
 *
#include <stdio.h>

int main() {
    char s[100]; char c; int a = -1;
    scanf("%c\n", &c);
    fgets(s, 100, stdin);
    for (int i = 0; i < strlen(s); i++) {
        a = s[i] == c && a == -1 ? i : a;
    }
    printf("%d", a);
}
*/
