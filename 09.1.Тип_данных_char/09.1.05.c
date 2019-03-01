/*
Вывести на экран K

символ латинского алфавита в верхнем и нижнем регистре.

Входные данные:
Одно натуральное число K,(K<27)

.

Выходные данные:
K

ый символ латинского алфавита. Сначала в верхнем регистре, потом в нижнем, без пробела между символами.

Sample Input 1:

1

Sample Output 1:

Aa

Sample Input 2:

26

Sample Output 2:

Zz

*/
#include <stdio.h>
#include <string.h>

int main(void) {
  int a = 0;
  scanf("%d", &a);
  a += 64;

  printf("%c%c", a, a+32);

  return 0;
}

/*
 * better code
 *
#include <stdio.h>

int main() {
    int a; scanf("%d", &a);
    printf("%c%c", a+64, a+96);
}
*/
