/*
По заданному числу N сформировать матрицу (N×N

) следующего вида:


1    2    3   ...  n-2  n-1  n
2    1    2   ...  n-3  n-2  n-1
3    2    1   ...  n-4  n-3  n-2
...              ...
n-1  n-2  n-3 ...  2    1    2
n    n-1  n-2 ...  3    2    1

Входные данные:
Одно натуральное число N

.

Выходные данные:
Вывести на экран массив N
на N

, указанного вида. Числа разделять пробелами.

Sample Input:

4

Sample Output:

1 2 3 4
2 1 2 3
3 2 1 2
4 3 2 1

*/

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(void)
{
  int n, i, j,a;

  scanf("%d", &n);

  for(i = 0; i < n; ++i){
   for(j = 0;j < n; ++j)
     printf("%d ", a = abs(i - j)+1);
     printf("\n");

     }


    return 0;
}
/*
 * better code
 *
#include <stdio.h>
#include <math.h>

int main() {
    int n; scanf("%d", &n); int a[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", abs(i-j)+1);
        }
        printf("\n");
    }
}
*/
