/*
 * Степень двойки
По данном числу N определить, является ли оно степенью числа 2

.

Входные данные:
Одно целое неотрицательное число N

.

Выходные данные:
YES -- если число N
является степенью двойки, и NO в противном случае.

 Sample Input:

128

Sample Output:

YES
*/

#include <stdio.h>

int main() {
    int number;
    int a = 1;

    scanf("%d", &number);

      for(a; a < number; a *= 2);

      if(a == number){
        printf("%s", "YES");return 0;
      }else printf("%s", "NO");

    return 0;
}
/*better code
 * #include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    while (n % 2 == 0 && n > 0) {
        n /= 2;
    }
    printf(n == 1 ? "YES" : "NO");
}
*/
