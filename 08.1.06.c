/*
 *
Найти среднее арифметическое элементов массива.

Входные данные:
Первая строка число N,(N>0)
-- длина массива. Длина массива не более 100 элементов. Вторая строка N

  натуральных чисел, записанных через пробел

Выходные данные:
Одно вещественное число M

-- среднее арифметическое элементов массива. Формат вывода -- два знака после запятой.

Подсказки:
Среднее арифметическое равняется сумме всех элементов массива, делённой на количество элементов.

Sample Input 1:

5
10 93 22 75 12

Sample Output 1:

42.40

Sample Input 2:

4
4 3 2 1

Sample Output 2:

2.50

Sample Input 3:

2
1 3

Sample Output 3:

2.00

Sample Input 4:

3
1 2 3

Sample Output 4:

2.00

Sample Input 5:

1
5

Sample Output 5:

5.00
*/

#include <stdio.h>

int main() {
    int N = 0;
    double a = 0;

    scanf("%d", &N);

    int A[N];

    for(int i = 0; i < N; ++i){
      scanf("%d", &A[i]);
    }

      for(int i=0; i<N; ++i){

          a = a + A[i];

          }printf("%.2f", a/N);

    return 0;
}

/*
 * better code
 *
#include <stdio.h>

int main() {
    int k, s = 0; scanf("%d", &k);int a[k];
    for (int i = 0; i < k; i++) {
        scanf("%d", &a[i]);
        s += a[i];
    }
    printf("%.2lf", (double)s / k);
}
*/
