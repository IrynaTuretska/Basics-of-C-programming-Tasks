/*
5.2 Набор задач для программирования - 2.

Идёт k
день года. Определить номер текущей недели в году. Предполагаем, что 1 января выпало на пятницу.

Входные данные:
Целое число k
, 1≤k≤365

.

Выходные данные:
Одно целое число -- номер недели.

Sample Input 1:

3

Sample Output 1:

1

Sample Input 2:

12

Sample Output 2:

3

Sample Input 3:

364

Sample Output 3:

53

Sample Input 4:

11

Sample Output 4:

3
*/

#include <stdio.h>
#include <math.h>


int main() {

    double X, x2=7, x1;


  scanf("%lf",&X);
  x1 = (X+4)/x2;

    printf("%d\n", (int)ceil(x1));

  return 0;
}

/*better code

#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    printf("%d", 1+(a+3)/7);
}

*/
