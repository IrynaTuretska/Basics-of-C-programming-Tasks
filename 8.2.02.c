/*
 Транспонирование
Для заданной матрицы вывести на экран транспонированную матрицу.

Входные данные:
Два натуральных числа N
и M. Далее с новой строки N строк по M целых чисел в каждой. N и M

не превышают десяти.

Выходные данные:
Вывести матрицу M
на N

. Числа в строках записывать через пробел.

Подсказки:
Транспонированная матрица получается из обычной заменой строк на столбики. Пример:


Исходная матрица:
1 2 3 4
5 6 7 8

Транспонированная матрица:
1 5
2 6
3 7
4 8

Sample Input:

3 4
1 2 3 4
1 3 4 5
0 2 3 -2

Sample Output:

1 1 0 
2 3 2 
3 4 3 
4 5 -2 

*/

#include <stdio.h>


int main()
{
  int N = 0;
  int M = 0;

  scanf("%d%d", &N, &M);

  int ARR[N][M];
  int arr[M][N];

  for(int i = 0;i < N; ++i){
    for(int j = 0; j < M; ++j){
      scanf("%d", &ARR[i][j]);
    }
  }

  for(int i = 0;i < M; ++i){
    for(int j = 0; j < N; ++j){
      arr[i][j] = ARR[j][i];
    }
    printf("\n");
  }

  for(int i = 0;i < M; ++i){
    for(int j = 0; j < N; ++j){
      printf("%d ", arr[i][j]);
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
        }
    }
    for (int j = 0; j < k; j++) {
        for (int i = 0; i < n; i++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }
}
*/
