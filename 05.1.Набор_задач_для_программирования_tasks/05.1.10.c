/*5.1 Набор задач для программирования






Бит-реверс
Напишите программу, которая делает бит-реверс.

Входные данные:
Число K
либо 0, либо 1

.

Выходные данные:
Вывести 1
, если K=0
вывести 0, если K=1

Sample Input 1:

0

Sample Output 1:

1

Sample Input 2:

1

Sample Output 2:

0

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int K;

 int main()
{
  scanf("%d", &K);
 printf("%d", (((K+1)-2)*(-1)));

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
