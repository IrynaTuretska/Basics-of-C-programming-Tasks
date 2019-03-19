/*5.1 Набор задач для программирования


Идёт k

секунда суток. Определить, сколько целых часов и целых минут прошло с начала суток.

Sample Input:

34961

Sample Output:

9 42

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int main(void){
  double k, hours, minuts;

  scanf("%lf", &k);
  hours = k/60/60;
  minuts = hours - (int)hours;
  minuts = minuts*60;

    printf("%d %d", (int)hours, (int)minuts);
    return 0;
}

/*better code

#include <stdio.h>

int main() {
    int k;
    scanf("%d", &k);
    printf("%d %d", k/3600, k/60%60);
}

*/
