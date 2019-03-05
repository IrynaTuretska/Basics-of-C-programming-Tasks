/*5.1 Набор задач для программирования



Даны натуральные числа M и N. Вывести младшую цифру целой части и старшую цифру дробной части числа MN

.

Входные данные:
Два натуральных числа M
и N

, записанных через пробел.

Выходные данные:
Два целых числа.  Первое младшая цифра целой части числа MN
, второе -- старшая часть дробной части числа MN

Sample Input 1:

1554 155

Sample Output 1:

0 0

Sample Input 2:

1234 473

Sample Output 2:

2 6

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int M,N;
 int main(int argc, char **argv)
{

 scanf("%d",&M); scanf("%d",&N);
 printf("%d %d" ,((M/N)%10), ((M*10)/N)%10);
 //printf("%i\n %i\n",((M/N)%10), ((M*10)/N));
 return 0;
}

/*better code

#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d %d", a/b, (int)((double)a/b*10)%10);
}

*/
