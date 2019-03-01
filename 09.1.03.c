/*


Вывести соседние символы в таблице ASCII.

Входные данные:
Один символ латинского алфавита.

Выходные данные:
Два символа, записанные через пробел. Первый -- символ, предшествующий исходному символу в кодовой таблице ASCII, второй -- символ, следующий за исходным символом в таблице ASCII.

Sample Input 1:

u

Sample Output 1:

t v

Sample Input 2:

b

Sample Output 2:

a c

*/

#include <stdio.h>
#include <string.h>

int main(void) {
  char str1[2];
  fgets(str1, 2, stdin);
  printf("%c %c", str1[0]-1,str1[0]+1);
  fflush(stdin);
  return 0;
}

/*
 * better code
 *
#include <stdio.h>

int main() {
    char c;
    scanf("%c", &c);
    printf("%c %c", c-1, c+1);
}
*/
