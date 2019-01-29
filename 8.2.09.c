/*
 *
Циклический сдвиг
Произвести циклический сдвиг столбцов квадратной матрицы A[N] на K

позиций вправо.

Входные данные:
Одно натуральное число N
. Далее с новой строки N строк по N целых чисел в каждой. N не превышают десяти. Затем с новой строки записано натуральное число K

.

Выходные данные:
Вывести на исходную матрицу N
на N, столбцы которой циклически сдвинуты на K

позиций вправо. Числа разделять пробелами.

Sample Input 1:

3
1 2 3
1 4 5
2 3 -2
2

Sample Output 1:

2 3 1 
4 5 1 
3 -2 2 

Sample Input 2:

3
1 2 3
1 4 5
2 3 -2
4

Sample Output 2:

3 1 2 
5 1 4 
-2 2 3 

*/

#include <stdio.h>

int main() {
  int N;
  scanf("%d", &N);
  int a[N][N];
  for(int i = 0; i < N; i++){
  	for(int j = 0; j < N; j++){
  	scanf("%d", &a[i][j]);
  }}
  int k;
  scanf("%d", &k);
  for(int i = 0; i < N; i++){
  	for(int j = 0; j < N; j++){
       printf("%d ", a[i][((N -1) * k + j)%N]);
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
    int n, l; 
    scanf("%d", &n);
    int a[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    scanf("%d", &l);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", a[i][(l*n+j-l)%n]);
        }
        printf("\n");
    }
}
*/
