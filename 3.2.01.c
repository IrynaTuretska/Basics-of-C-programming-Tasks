/*
3.2 Функция scanf. Основы ввода данных.




В следующей программе переменные объявлены внутри программы. Исправьте её таким образом, чтобы значения переменных a, b, и с считывались функцией scanf.


P.S. Обратите внимание! Формат в котором приходят данные из проверяющей системы

Sample Input:

10 7 2

Sample Output:

15

*/

#include <stdio.h>
int main(void) {
  int a, b, res;

  scanf("%d",&a);
  scanf("%d",&b);

  res = a + b;

  int c;

  scanf("%d",&c);
  res = res - c;

  printf("%d\n", res);
  return 0;
}

/*
 * better code
 *
#include <stdio.h> 
int main(void) {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    printf("%d\n", a + b - c);
}
*/
