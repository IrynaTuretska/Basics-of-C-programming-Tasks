/*
 

Написать программу для перевод символов в верхний регистр.

Входные данные:
Одни символ в нижнем регистре.

Выходные данные:
Тот же самый символ, но в верхнем регистре.

Подсказки:
Обратите внимание на расстояние в таблице ASCII между одинаковыми буквами в разных регистрах. Например, между a и A, или h и H.

Sample Input:

q

Sample Output:

Q

*/
#include <stdio.h>
#include <string.h>

int main(void) {
  char str1[2];

  fgets(str1, 2, stdin);

  printf("%c", str1[0]-32);
  fflush(stdin);

  return 0;
}
/*
 * better code
 *
#include <stdio.h>

int main() {
  char a;
    scanf("%c", &a);
    printf("%c", a-32);
}
*/
