/*
Столбцы
Для заданной матрицы посчитать сумму элементов каждого столбца.

Входные данные:
Два натуральных числа N
и M. Далее с новой строки N строк по M целых чисел в каждой. N и M

не превышают десяти.

Выходные данные:
M

целых чисел, записанных через пробел. Первой вывести сумму последнего столбца, второй предпоследнего и т.д.

Sample Input:

3 4
1 2 3 4
1 3 4 5
0 2 3 -2

Sample Output:

 7 10 7 2
*/

#include <stdio.h>

int main(void)
{
  int n, m;
  int sum_general = 0;

  scanf("%d%d", &n,&m);
  int ARR[n][m];

    for(int a = 0; a < n; ++a)
       for(int x = 0; x < m; ++x){
          scanf("%d", &ARR[a][x]);
       }

do{
   for (int i= 0;i < n; i++)
        {
            sum_general +=ARR[i][m-1];

        }
        --m;
        printf("%d ", sum_general);
        sum_general = 0;
}while(m !=0);

    return 0;
}
/*
 * better code
 *
#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);
    int a[n][k];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            scanf("%d", &a[i][j]);
            a[0][j] += i > 0 ? a[i][j] : 0;
        }
    }
    for (int i = k-1; i >= 0; i--) {
        printf("%d ", a[0][i]);
    }
}
*/
