/*
 *
Вывести элементы двумерного массива (матрицы) на экран.

Входные данные:
Два натуральных числа N
и M. Далее с новой строки N строк по M целых чисел в каждой. N и M

не превышают десяти.

Выходные данные:
Вывести матрицу N
на M

. Числа в строках записывать через пробел.

Sample Input:

3 4
1 2 3 4
1 3 4 5
0 2 3 -2

Sample Output:

1 2 3 4
1 3 4 5
0 2 3 -2

*/

#include <stdio.h>


int main()
{
  int N = 0;
  int M = 0;

  scanf("%d", &N);
  scanf("%d",&M);

  int ARR[N][M];

  for(int i = 0;i < N; ++i){
    for(int j = 0; j < M; ++j){
      scanf("%d", &ARR[i][j]);
    }
  }

  for(int i = 0;i < N; ++i){
    for(int j = 0; j < M; ++j){
      printf("%d ", ARR[i][j]);
    }
    printf("\n");
  }

  return 0;
}

/*
 * better code
 *
#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k); int a[n][k];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            scanf("%d", &a[i][j]);
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
*/

