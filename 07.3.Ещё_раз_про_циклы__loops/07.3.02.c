/*
 Пирамида.
Вывести на экран пирамиду из чисел.

Входные данные:
Одно целое число N

.

Выходные данные:
Пирамида из натуральных чисел высоты N

.

Подсказки:
См. примеры входных и выходных данных. 

 Sample Input 1:

5

Sample Output 1:

1
1 2
1 2 3
1 2 3 4
1 2 3 4 5

Sample Input 2:

1

Sample Output 2:

1

*/

#include <stdio.h>

int main()
{
  int N = 0;
  int j = 0;

    scanf("%d", &N);

for (int i = 1; i <= N; ++i) {
    for (j = 1; j <= i; ++j)
        printf("%d ", j);
    printf("\n");
}

    return 0;
}
/*better code
 *
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
}
*/

