/*
Для заданного числа n проверить, является ли оно простым.

Входные данные:
Одно натуральное число N

.

Выходные данные:
1 -- если число простое
0 -- если число составное

Sample Input:

8

Sample Output:

0
*/

#include "stdio.h"
#include<math.h>

int main(void) {

int N;

scanf("%d", &N);

for (int i = 2; i<sqrt(N); i++) {
    if (N % i == 0) {
      printf("0");
        return 0;
    }
}
printf("1");
  return 0;
}

/*
 * better code
 *
#include <stdio.h>

int main() {
    int n, k = 0;
    scanf("%d", &n);
    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            k++;
        }
    }
    printf(k == 0 ? "1" : "0");
}
*/

