/*
Реверс
Переставить элементы массива в обратном порядке.

Входные данные:
Первая строка число N,(N>0)
-- длина массива. Длина массива не более 100 элементов. Вторая строка N

  целых чисел, записанных через пробел

Выходные данные:
Элементы исходного массива, записанные в обратном порядке. Между собой элементы разделяются пробелом. 

 Sample Input:

5
10 -93 22 75 12

Sample Output:

12 75 22 -93 10
*/

#include <stdio.h>
//#define NUMBERS 5

int main(void) {

  int NUMBERS;

  scanf("%d", &NUMBERS);

    int arr[NUMBERS];


  for (int i = 0; i <= NUMBERS-1; i = i + 1){


    scanf("%d", &arr[i]);

  }

  for (int i = NUMBERS-1; i >= 0; i = i - 1){

      printf("%d ", arr[i]);

  }

  return 0;
}

/*
#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); int a[n];
    for (int i = 1; i <= n; i++) {
        scanf("%d", &a[i]);
    } for (int i = n; i >= 1; i--) {
        printf("%d ", a[i]);
    }
}

*/
