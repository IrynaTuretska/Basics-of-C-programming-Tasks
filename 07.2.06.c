/*
 * Точные квадраты
Выведите на экран все точные квадраты натуральных чисел, не превосходящие данного числа N. Выводить квадраты следует от меньшего к большему.

Входные данные:
Одно целое число N. (1≤N≤10000

)

Выходные данные:
Квадраты натуральных чисел, записанные через пробел.

 Sample Input 1:

50

Sample Output 1:

1 4 9 16 25 36 49

Sample Input 2:

1

Sample Output 2:

1
*/
#include <stdio.h>


int main(){
    int n, x=1;

    scanf("%d", &n);

    while (x*x <= n){
        printf("%d ", x*x);
        x++;
    }
return 0;
}
/*better code
 * #include <stdio.h>

int main() {
    int n, i = 1;
    scanf("%d", &n);
    while (i*i <= n) {
        printf("%d ", i*i);
        i++;
    }
}
*/
