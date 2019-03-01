/*4.1 Арифметика в Си




Напишите программу, определяющую чётные числа.

На вход программы поступает одно целое неотрицательное число. Программа должна вывести 1, если число чётное, и 0, если число нечётное.

Sample Input:

2

Sample Output:

1

*/


#include <stdio.h>

int main() {
  int x,y;
  scanf("%d", &x);
  y = -((x % 2)-1);
  printf("%d\n",y);
    return 0;
}

/*better code


#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    printf("%d", (a+1)%2);
}

*/
