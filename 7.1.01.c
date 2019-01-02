/*
Написать программу выводящую на экран первые N

натуральных чисел.

Входные данные:
Одно  целое число N
, N>0

Выходные данные:
Первые N

натуральных чисел, записанных через пробел.

Sample Input:

8

Sample Output:

1 2 3 4 5 6 7 8


*/

#include <stdio.h>

int main(void) {

  int N = 0;
  scanf("%d", &N);
  
  for (int a = 1; a <= N; a++){

  printf("%d ", a);

  }
  return 0;
}


/*better  code

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; printf("%d\ ", ++i));
}

*/

