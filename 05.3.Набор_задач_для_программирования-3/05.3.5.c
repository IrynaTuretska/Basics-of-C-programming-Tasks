/*
   5.3 Набор задач для программирования - 3.

   Перевести число из двоичной системы в десятичную. Пример перевода из двоичной системы счисления в десятичную представлен на картинке.

   Входные данные:
   Четырёхзначное двоичное число B

   .

   Выходные данные:
   Десятичное целое число, соответствующее двоичному числу B

   .

   Sample Input 1:

   1001

   Sample Output 1:

   9

   Sample Input 2:

   1010

   Sample Output 2:

   10

 */
#include <stdio.h>
#include <math.h>

int main()

{

        int d, d1,d2,d3,d4, binary;


        scanf("%d",&d);

        d1 = d/1000;
        d2 = (d/100)%10;
        d3 = (d/10)%10;
        d4 = d%10;

        binary = d4*pow(2,0)+d3*pow(2,1)+d2*pow(2,2)+d1*pow(2,3);

        printf("%d", binary);

        return 0;
}
/*better code

 #include <stdio.h>

   int main() {
    int n;
    scanf("%d", &n);
    printf("%d", n/1000*8+n/100%10*4+n/10%10*2+n%10);
   }

 */
