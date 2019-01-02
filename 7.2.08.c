/*
 * Количество цифр
Подсчитать количество цифр в записи натурального числа N

.

Входные данные:
Одно натуральное число N

.

Выходные данные:
Одно целое число k
-- количество цифр в записи числа N.

 Sample Input:

12938

Sample Output:

5
*/

#include <stdio.h>

int main()
{
    int x;
    int a = 0;

    scanf("%d", &x);

    while (x != 0)
    {

        ++a;
        x /= 10;

    }printf("%d", a);

    return 0;
}
/***better code
 *
 * #include <stdio.h>

int main() {
    int n, a = 0;
    scanf("%d", &n);
    while (n != 0) {
        n /= 10; a++;
    }
    printf("%d", a);
}
*/
