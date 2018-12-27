/*Степени двойки
По заданному N вывести через пробел все (натуральные, т.е. 1,2,3,… ) степени числа 2, для которых 2k≤N

.

Входные данные:
Целое натуральное число N
, причем N<30000

.

Выходные данные:
Натуральные числа от 1
до p, такие, что если посчитать 2k, то получится число не превосходящее N.


 Sample Input 1:

128

Sample Output 1:

1 2 3 4 5 6 7 

Sample Input 2:

1

Sample Output 2: 



*/


#include <stdio.h>
#include <math.h>

int main(void)
{
int n = 0;
int m = 1;
  scanf("%d", &n);

  for(m = 1; m <= n; ++m){
    if(pow(2,m) <= n){
          printf("%d ", m);
          continue;
    }
  }
    return 0;
}

/*better code
 *
 * #include <stdio.h>
#include <math.h>

int main() {
    int n, i = 1;
    scanf("%d", &n);
    while (pow(2, i) <= n) {
        printf("%d ", i);
        i++;
    }
}
*/

