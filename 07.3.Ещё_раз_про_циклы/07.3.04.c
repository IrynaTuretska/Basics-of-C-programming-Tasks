/*
*
 Дубликаты
Удалить из последовательности дубликаты.

Входные данные:
В первой строке задано натуральное число N
. Во второй строке записана упорядоченная по возрастанию последовательность из N

целых чисел, которая может содержать одинаковые элементы.

Выходные данные:
Вывести все различные элементы последовательности, упорядоченные по возрастанию.

Sample Input 1:

21
 -2 -2 -2 4 5 6 7 7 7 7 7 7 7 7 91 91 92 92 93 93 96

Sample Output 1:

-2 4 5 6 7 91 92 93 96

Sample Input 2:

9
 1 2 4 5 6 7 8 9 10

Sample Output 2:

1 2 4 5 6 7 8 9 10

Sample Input 3:

1
 -7

Sample Output 3:

-7

Sample Input 4:

3
 -1 -1 -1

Sample Output 4:

-1

Sample Input 5:

4
 1 3 3 3

Sample Output 5:

1 3
*/

#include <stdio.h>

int main(void)
{
    int n;

    scanf("%d", &n);

    int i,r,r1;

    for (i=1; i <= n; ++i, r1 = r){

        scanf("%d", &r);

        if ((r != r1)||( i == 1)) printf("%d ",r);
    }
    return 0;
}

/*
*better code
*
#include <stdio.h>

int main() {
    int k, a, b = -100000;
    scanf("%d", &k);
    for (int i = 1; i <= k; i++) {
        scanf("%d", &a);
        if (a != b) {
            printf("%d ", a);
            b = a;
        }
    }
}
*/
