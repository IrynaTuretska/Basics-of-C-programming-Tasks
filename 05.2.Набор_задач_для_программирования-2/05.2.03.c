/*
5.2 Набор задач для программирования - 2.


Посчитать разность между количеством нечетных и чётных чисел.

Входные данные:
Пять целых чисел: x1,x2,x3,x4,x5
. (−100≤xi≤100)

Выходные данные:
Одно целое число. Разность между количеством нечетных чисел и количеством чётных чисел. Из количества нечётных чисел вычесть количество чётных.

Sample Input:

2 1 5 -20 0

Sample Output:

-1
*/

#include <stdio.h>
#include <math.h>

int main() {

int b, a, x1, x2, x3, x4, x5, Xx=0, Xy=0;
scanf("%d %d %d %d %d", &x1, &x2, &x3, &x4, &x5);

 x1 = (x1&1);
 x2 = (x2&1);
 x3 = (x3&1);
 x4 = (x4&1);
 x5 = (x5&1);

 if(x1 == 0)
 Xx = Xx+1;
 else
 Xy = Xy+1;

 if(x2 == 0)
 Xx = Xx+1;
 else
 Xy = Xy+1;

 if(x3 == 0)
 Xx = Xx+1;
 else
 Xy = Xy+1;

 if(x4 == 0)
 Xx = Xx+1;
 else
 Xy = Xy+1;

 if(x5 == 0)
 Xx = Xx+1;
 else
 Xy = Xy+1;

printf("%d", Xy - Xx);

 return 0;
}

/*better code

#include <stdio.h>

int main() {
    int n1, n2, n3, n4, n5;
    scanf("%d%d%d%d%d", &n1, &n2, &n3, &n4, &n5);
    printf("%d", -5 + 2*((n1&1) + (n2&1) + (n3&1) + (n4&1) + (n5&1)));
}

*/
