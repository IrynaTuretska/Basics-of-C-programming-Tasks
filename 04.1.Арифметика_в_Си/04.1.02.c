/*4.1 Арифметика в Си




На вход программы поступают два целых числа — длины сторон прямоугольника. Посчитайте и выведите периметр этого прямоугольника.

Периметр — сумма длин всех сторон.

Sample Input:

12 25

Sample Output:

74

*/

#include <stdio.h>

int main() {
  int x,y,per;
    scanf("%d" "%d",&x,&y);
    per=2*(x+y);
    printf("%d",per);
  return 0;
}

/*better code
#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", a*2+b*2);
}
*/
