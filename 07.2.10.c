/*
 * Дано натуральное число N. Найти наименьшее натуральное число r, такое, что 2r≥N

.

Входные данные:
Одно натуральное число N

.

Выходные данные:
Число r
.

 Sample Input 1:

128

Sample Output 1:

7

Sample Input 2:

1

Sample Output 2:

1

Sample Input 3:

7

Sample Output 3:

3
*/


#include <stdio.h>
#include <math.h>

int main(void)
{
int n = 0;
int m = 1;
  scanf("%d", &n);

  for(m = 1; m <= n; ++m){
    if(pow(2,m) >= n){
      printf("%d ", m);
      return 0;

    }

  }
    return 0;
}
/*better code
 * #include <stdio.h>
#include <math.h>

int main() {
    int n, i = 1;
    scanf("%d", &n);
    while (pow(2, i) < n) {
        i++;
    }
    printf("%d", i);
}
*/
