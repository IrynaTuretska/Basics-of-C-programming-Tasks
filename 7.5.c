/*
 Факториал.
Для целого числа k(0≤k≤12) посчитать k!.

Входные данные:
Одно целое число k
, (0≤k≤12)

.

Выходные данные:
Значение факториала числа k
. 
 Sample Input:

4

Sample Output:

24
*/

#include<stdio.h>

int factorial = 1;
int N;

int main (){

scanf("%d", &N);
    
for (int i = 1; i <= N; i++)
    factorial = factorial * i;
    
    printf("%d", factorial);
}



/*better code

#include <stdio.h>

int main() {
    int n, f = 1;
    scanf("%d", &n);
    for (int i = 1; i<=n; i++) {
        f *= i;
    }
    printf("%d", f);
}
*/