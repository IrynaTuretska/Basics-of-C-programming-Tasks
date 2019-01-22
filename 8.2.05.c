/*
 *
Диагонали
Для заданной квадратной матрицы A[N][N] посчитать следующие величины:

    произведение элементов, стоящих на главной диагонали
    произведение элементов, стоящих на побочной диагонали

Входные данные:
Одно натуральное число N
. Далее с новой строки N строк по N целых чисел в каждой. N

не превышают десяти.

Выходные данные:
Два целых числа, записанных через пробел. Первым вывести большее из чисел.

Подсказки:
Попробуйте решить задачу, не используя вложенные циклы 

https://ucarecdn.com/63e2c3d1-b51c-4efc-9977-d6aed7671f1b/


 Sample Input:

3
1 2 3
1 4 5
2 3 -2

Sample Output:

24 -8
*/

#include <stdio.h>

int main(void)
{
  int n;
  int multi_general = 1;
  int multi_second = 1;

  scanf("%d", &n);
  int ARR[n][n];


    for(int i = 0; i < n*n; ++i)
           scanf("%d", &ARR[0][i]);

    for (int i=0; i < n; i++){
        multi_general = multi_general*ARR[i][i];
        multi_second = multi_second*ARR[i][n-i-1];
    }


    if (multi_general > multi_second)
        printf("%d %d", multi_general, multi_second);
    else
        printf("%d %d", multi_second, multi_general);

    return 0;
}

/*
 *
 * better code
 *
 #include <stdio.h>
#include <math.h>

int main() {
    int n, g = 1, p = 1; scanf("%d", &n);
    int a[10][10];
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            scanf("%d", &a[i][j]);
            g *= i == j ? a[i][j] : 1;
            p *= i+j-1 == n ? a[i][j] : 1;
        }
    }
    printf("%.0f %.0f", fmax(g, p), fmin(g, p));
}
*/
