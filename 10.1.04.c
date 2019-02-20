/*
10.1 Функции и переменные
  

Факториал.
Напишите функцию с именем factorial, которая вычисляет факториал числа, переданного ей в качестве аргумента.

Входные данные:
Одно целое неотрицательное число N,(N<13)

.

Выходные данные:
Одно целое число, факториал исходного числа.

Sample Input:

5

Sample Output:

120

*/
#include <stdio.h>

int factorial(int);

int main(void){
    int f;

    scanf("%d", &f);
    printf("%d", factorial(f));

    return 0;
}
int factorial(int k){
    int n=1, i;
    for(i=1; i<= k; i++) n*=i;
    return n;
}

/*
 * better code
 *
int main(void){
    int k; scanf("%d", &k);
    printf("%d", factorial(k));
}
int factorial(int k){
    if (k <= 1) return 1; else return k*factorial(k-1);
}
*/
