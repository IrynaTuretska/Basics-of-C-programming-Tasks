/*
9.2 Символьные строки
  

Шифровка.
В строке слова зашифрованы — каждое из них записано наоборот. Написать программу, расшифровывающую строку.

Входные данные:
Символьная строка.

Выходные данные:
Вывести расшифрованную строку.

Sample Input:

sI ur.redoCgnuoY a doog ?etis

Sample Output:

Is YoungCoder.ru a good site? 

*/

#include <string.h>
#include <stdio.h>



int main()
{
  char str[100];
  char sep[5] = " \n";
  char *istr;

  fgets(str, 100, stdin);
  istr = strtok(str, sep);

  while (istr != NULL)
  {
      for (int i = strlen(istr) - 1; i >= 0; i--)
      {
          printf("%c", istr[i]);
      }
      printf(" ");
      istr = strtok(NULL, sep);
  }

  return 0;
}

/*
 * better code
 *
#include <stdio.h>

int main() {
    char s[100], s1[100]; int b = -1, e = -1;
    gets(s);
    for (int i = 0; i < strlen(s); i++) {
        if (i == 0 || s[i-1] == ' ') b = i;
        if (s[i+1] == ' ' || i == strlen(s)-1) e = i;
        if (b != -1 && e != -1) {
            for (int j = e; j >= b; j--) {
                printf("%c", s[j]);
            }
            printf(" ");
            b = -1; e = -1;
        }
    }
}
*/
