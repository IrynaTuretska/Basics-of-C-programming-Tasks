/*
   5.3 Набор задач для программирования - 3.

   Одноклеточная амёба каждые 3
   часа делится на 2 клетки. Определить, сколько клеток будет через k

   часов

   Входные данные:
   одно целое число k

   Выходные данные:
   Целое число, равное количеству клеток амёбы через k

   часов.

   Sample Input:

   36

   Sample Output:

   4096

 */
#include <stdio.h>
#include <math.h>

int main() {

        int A;

        scanf("%d",&A);

        printf("%d",(int)pow(2,A/3));

        return 0;
}

/*better code
 #include <stdio.h>
 #include <math.h>

   int main() {
    int k;
    scanf("%d", &k);
    printf("%.0lf", pow(2, k / 3));
   }
 */
