///*


Комментарии
Удалить часть символьной строки, заключенную между последовательностями символов /* и */.

Входные данные:
Строка символов, содержащая не более одной последовательности символов вида /* ... */ и имеющая не более 100 символов.  В строке могут содержаться непарные символы */ и /*, их удалять не нужно.

Выходные данные:
Вывести исходную строку, преобразованную указанным способом.

Sample Input 1:

Young/* cut it */Coder.ru

Sample Output 1:

YoungCoder.ru

Sample Input 2:

*/Young/* cut it */Coder.ru

Sample Output 2:

*/YoungCoder.ru

*///

#include <stdio.h>

int main()
{
    char str[256];
    int x = 256, y = 0;
    fgets(str, 256, stdin);
    for (int i = 0; str[i] != EOF && str[i] != 0x00; ++i) {
        if (str[i] == '/' && str[i + 1] == '*') {
            x = i;
        }
        if (i > x && str[i] == '*' && str[i + 1] == '/') {
            y = i + 2;
            break;
        }
    }
    if (y) {
        for (; str[y] != EOF && str[y] != 0x00; ++y, ++x) {
            str[x] = str[y];
        }
        str[x] = '\0';
    }
    puts(str);
    return 0;
}

/*
 * better code
 *
#include <stdio.h>

int main() {
    char s[100]; int k = 0, a = 0, b = 0, d = 0;
    gets(s);
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == '/' && s[i+1] == '*') a++;
        if (s[i] == '/' && s[i-1] == '*') b++;
    }
    if (a == 0 || b == 0) d++;
    for (int i = 0; i < strlen(s); i++) {
        if (s[i] == '/' && s[i+1] == '*' && k == 0) k++;
        if (k - 1 || d) {
            printf("%c", s[i]);
        }
        if (s[i] == '/' && s[i-1] == '*' && k == 1) k--;
    }
}
*/
