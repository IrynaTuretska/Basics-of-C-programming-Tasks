/*
 Положительная последовательность
Будем называть последовательность положительной, если все числа последовательности положительны.

Входные данные:
Целочисленная последовательность произвольной длины, заканчивающаяся числом −9999


Выходные данные:
YES -- если последовательность положительная, NO в противном случае (последовательность не положительная или в последовательности отсутствуют числа.

Sample Input 1:

192 329 842 -432 382 912 -9999

Sample Output 1:

NO

Sample Input 2:

13 483 759 120 883 793 223 1129 988 747 554 829 12 84 12 833 -9999

Sample Output 2:

YES
*/

#include <stdio.h>
#include <stdbool.h>


int main()
{
    int number;
    scanf("%d", &number);

    bool any = false;

    while (number != -9999)
    {
        if(number >= 0 && number != -9999){
        any = true;
        scanf("%d",&number);

        }else if(number < 0 || number == -9999){
          any = false;
          break;

        }
    }
    printf("%s",any == false ? "NO":"YES");

    return 0;
}
/*
 * better code
 *
#include <stdio.h>

int main() {
    int a, k = 0, m = 0; scanf("%d", &a);
    while (a+9999) {
        m = 1;
        if (a < 0) k++;
        scanf("%d", &a);
    }
    printf(k == 0 && m == 1 ? "YES" : "NO");
}
*/
