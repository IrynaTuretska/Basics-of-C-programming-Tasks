/*5.1 Набор задач для программирования






Факториал
Факториалом натурального числа N называют произведение всех натуральных чисел от 1 до N включительно. Факториал обозначают значком ! после числа.
Например:
3!=1⋅2⋅3 -- факториал трёх
5!=1⋅2⋅3⋅4⋅5

-- факториал пяти
Напишите программу, которая вычисляет значение факториала для первых 10 чисел.

Входные данные:
отсутствуют

Выходные данные:
10 строк вида

1! =       1
2! =       2
3! =       6

и т.д.

Подсказки:
под значение факториала выделите поле размером в 8

символов.

Sample Input:


Sample Output:

1! =       1
2! =       2
3! =       6
4! =      24
5! =     120
6! =     720
7! =    5040
8! =   40320
9! =  362880
10!= 3628800

*/

#include <stdio.h>

static int
factorial (int n)
{
  return (n < 2) ? 1 : n * factorial (n - 1);
}

int
main ()
{
  int n;
  n = 1;
    printf ("%d! =%8.d\n",n, factorial (n));
    n = 2;
    printf ("%d! =%8d\n",n, factorial (n));
  n = 3;
    printf ("%d! =%8d\n",n, factorial (n));
    n = 4;
    printf ("%d! =%8d\n",n, factorial (n));
    n = 5;
    printf ("%d! =%8d\n",n, factorial (n));
    n = 6;
    printf ("%d! =%8d\n",n, factorial (n));
    n = 7;
    printf ("%d! =%8d\n",n, factorial (n));
    n = 8;
    printf ("%d! =%8d\n",n, factorial (n));
    n = 9;
    printf ("%d! =%8d\n",n, factorial (n));
    n = 10;
    printf ("%d!=%8d\n",n, factorial (n));
  return 0;
}

/*better code

#include <stdio.h>

int main() {
printf("1! =       1\n\
2! =       2\n\
3! =       6\n\
4! =      24\n\
5! =     120\n\
6! =     720\n\
7! =    5040\n\
8! =   40320\n\
9! =  362880\n\
10!= 3628800");
}

*/
