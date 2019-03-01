/*
Числа Фибоначчи
Последовательность чисел Фибоначчи определяется следующим образом:
F1=1,F2=1,
F3=F1+F2,…,Fk=Fk−2+Fk−1.
Посчитать значение N-го числа Фиббоначи.

Входные данные:
Одно натуральное число N
, (N≤45)

Выходные данные:
Значение N
-го числа Фибоначчи. 

 Sample Input:

45

Sample Output:

1134903170

*/

/*
Fk=Fk−2+Fk−1.
*/

#include <stdio.h>

  int Fk, a = 1, b = 1, c;

int main() {
  

  scanf("%d", &Fk);
  if (Fk <= 2)
    printf("1 ");
  else 
  {
    for (int i = 3; i <= Fk; i++) 
    {
      c = a + b; 
      a = b; b = c;
    }
    printf("%d ", b); 
  }
  return 0;
}

/*better code

#include <stdio.h>

int f(int a) {
    return a < 3 ? 1 : f(a-1) + f(a-2);
}

int main() {
    int a;
    scanf("%d", &a);
    printf("%d", f(a));
}
*/