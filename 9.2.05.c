/*

Лишние пробелы
Удалить из строки лишние пробелы. Пробел считается лишним, если:

    стоит в начале строки;
    стоит в конце строки;
    ему предшествует пробел.

Входные данные:
Строка символов.

Выходные данные:
Исходная строка без лишних пробелов.

Sample Input:

YoungCoder.Ru     2014  -  2017
Sample Output:

YoungCoder.Ru 2014 - 2017

*/
#include  <stdio.h>
#include <locale.h>
#include <string.h>
 
int main() 
{
    char str[101] = "";
    char res[101] = "";
    
    fgets (str, 101, stdin);
    
    
    int j = 0;
    int i;
    for (i = 0; i<strlen(str) ; i++) {
        if (str[i] == ' ') 
        {
          if (j==0) continue;
          if (str[i+1] == ' ') continue;
        }
        res[j] = str[i];
        j++;
    }
    i=strlen(res);
    if(res[i-2] == ' ')
        res[i-2] = '\0';
 
    printf("%s", res);
}
/*
 * beter code
 *
#include <stdio.h>

int main() {
	char c, p;
	while ((p = getchar()) == ' ');

	while ('\n' != p) {
		if ((c = getchar()) != ' ' && c != '\n' || p != ' ')
			printf("%c", p);
		p = c;
	}

	printf("%c", p);
}
*/

