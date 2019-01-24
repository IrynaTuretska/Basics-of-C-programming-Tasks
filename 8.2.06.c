/*
 *
 Для заданной квадратной матрицы A[N] посчитать следующие величины:

    сумму элементов, находящихся над главной диагональю
    сумму элементов, расположенных под побочной диагональю


Входные данные:
Одно натуральное число N
. Далее с новой строки N строк по N целых чисел в каждой. N

не превышают десяти.

Выходные данные:
Два целых числа, записанных через пробел. Первым вывести меньшее из чисел.

Sample Input:

3
1 2 3
1 4 5
9 3 -7

Sample Output:

1 10
*/

#include <stdio.h>

int main(void)
{
  int n;
  int sum_general = 0;
  int sum_second = 0;

  scanf("%d", &n);
  int ARR[n][n];

    for(int a = 0; a < n; ++a)
       for(int x = 0; x < n; ++x){
          scanf("%d", &ARR[a][x]);
       }


   for (int i= 0;i < n; i++)
        for (int j= 0;j < n; j++) {
            if(i < j) sum_general +=ARR[i][j];
            if(i+j > n-1) sum_second +=ARR[i][j];
        }


    if (sum_general < sum_second)
        printf("%d %d", sum_general, sum_second);
    else
        printf("%d %d", sum_second, sum_general);


    return 0;
}

/*
 * better code
 *
 #include <stdio.h>

int main() {
    int n, g = 0, p = 0; scanf("%d", &n);
    int a[n][n];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            scanf("%d", &a[i][j]);
            g += i < j ? a[i][j] : 0;
            p += i+j-1 > n ? a[i][j] : 0;
        }
    }
    printf("%.0f %.0f", fmin(g, p), fmax(g, p));
}

*/
