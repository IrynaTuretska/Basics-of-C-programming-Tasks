/*
Вывести на экран последние K

символов латинского алфавита в верхнем регистре в алфавитном порядке.

Входные данные:
Одно натуральное число K,(K<27)

.

Выходные данные:
K

последних символов латинского алфавита.

Sample Input:

3

Sample Output:

XYZ

*/
#include <stdio.h>
#include <string.h>

int main(void) {
  int a,n,i;
  scanf("%d", &a);
  n = 91-a;

  for(i = n; i <= 90; ++i)
  {
  printf("%c", i);
  }

  return 0;
}

/*
 * better code
 *
#include <stdio.h>

int main() {
    int a; scanf("%d", &a);
    for (int i = a-1; i >= 0; i--){
        printf("%c", 90-i);
    }
}
*/
