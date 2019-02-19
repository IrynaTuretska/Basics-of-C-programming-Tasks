/*
10.1 Функции и переменные

Минимум-2.
Опишите функцию с именем min, которая вычисляет и возвращает минимальное из трёх чисел, переданных в неё.

Входные данные:
Три целых числа.

Выходные данные:
Одно целое число -- минимум из чисел, переданных в функцию.

Sample Input:

6 5 7

Sample Output:

5

*/

#include<stdio.h>
int min(int a, int b, int c){
 int min;
 min = a;
    if(min > b)
        min = b;
    if(min > c){
        min = c;
    }
  return min;
}
int main(void){
    int a, b, c, m;

    scanf("%d%d%d", &a, &b, &c);

    m = min(a,b,c);

    printf("%d", m);


    return 0;
}

/*
 * better code
 *
#include<stdio.h>
#include<math.h>
int min(int a, int b, int c){
    int d = a <= b && a <= c ? a : b <=a && b <= c ? b : c;
    return d;
}
int main(void){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d", min(a, b, c));
}
*/
