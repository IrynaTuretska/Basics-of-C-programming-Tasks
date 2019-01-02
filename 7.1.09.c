/*
 Делители
Для заданного числа n вывести все его делители и их количество на экран.

Входные данные:
Одно натуральное число N

.

Выходные данные:
Делители числа N

, записанные через один пробел в порядке возрастания .
Количество делителей на отдельной строке.

Sample Input:

8

Sample Output:

1 2 4 8 
4
*/

#include <stdio.h>

int A, b = 0;
int main() {
  scanf("%d", &A);
  for (int a = 1; a <= A; a++){
    if(A%a == 0){
        b = b + 1;
  printf("%d ", a);
    }
  }
  printf("\n%d", b);
  return 0;
}
/*
 * better code

 #include <stdio.h>

int main() {
    int n, k = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
            k++;
        }
    }
    printf("\n%d", k);
}
*/

