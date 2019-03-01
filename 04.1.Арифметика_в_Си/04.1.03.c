/*4.1 Арифметика в Си




На вход программы поступает целое трёхзначное число. Напишите программу, которая выводит сумму цифр этого числа.


Sample Input:

123

Sample Output:

6

*/

#include <stdio.h>

int main() {
  int x,y,z,w,sum;
    scanf("%d",&x);
    y = x /100;
    z = x % 100/10;
    w = x % 10;
    sum = y+z+w;

    printf("%d\n",sum);
  return 0;
}

/*better code

#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    printf("%d", a/100+a/10%10+a%10);
}
*/
