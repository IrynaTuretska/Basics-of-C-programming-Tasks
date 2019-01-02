/*
Экспонента с заданной точностью
Вычислить число e=1+11!+12!+13!+14!+… с точностью ε.

Входные данные:
Вещественное число ε,(10−9<=ε<=10−1) .

Выходные данные: 
Значение числа e с точностью ϵ (8 знаков после запятой). Считать, что достигнута точность ε, если очередной член последовательности меньше ε, т.е.

1k!<ε

Sample Input 1:

0.1
Sample Output 1:

2.70833333
Sample Input 2:

0.000001
Sample Output 2:

2.71828180



 */

#include <stdio.h>

int main() {
  double eps, e = 1;
  int k = 1, i = 1;
  scanf("%lf", &eps);
  while ( e += 1./k )
  {
      if ( 1./k < eps ) break;
      k *= ++i;
  } printf("%.8lf", e);
  return 0;
}

/*
 *better code
#include <stdio.h>
 
int main() {
  double eps, e = 1;
  int k = 1, i = 1;
  scanf("%lf", &eps);
  while ( e += 1./k ) 
  {
      if ( 1./k < eps ) break;
      k *= ++i;
  } printf("%.8lf", e);         
  return 0;
}

*/
