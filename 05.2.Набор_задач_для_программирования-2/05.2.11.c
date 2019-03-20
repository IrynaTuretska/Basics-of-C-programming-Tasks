/*
5.2 Набор задач для программирования - 2.



Идёт k день года. Определить номер текущей недели в году.
Предполагаем, что 1 января был понедельник.

Входные данные:
Целое число k
, 1≤k≤365

.

Выходные данные:
Одно целое число -- номер недели.

Sample Input 1:

12

Sample Output 1:

2

Sample Input 2:

243

Sample Output 2:

35
*/

#include <stdio.h>
#include <math.h>


int main() {

    double X, x2=7, x1;


  scanf("%lf",&X);
  x1 = (X/x2);

    printf("%d\n", (int)ceil(x1));

  return 0;
}

/*better code

#include <stdio.h>

int main() {
    int k;
    scanf("%i", &k);
    printf("%i", (k+6)/7);
}

*/
