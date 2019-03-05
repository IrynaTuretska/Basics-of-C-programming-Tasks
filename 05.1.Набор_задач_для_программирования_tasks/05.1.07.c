/*5.1 Набор задач для программирования




Определить число, полученное выписыванием в обратном порядке цифр заданного целого трехзначного числа.

Входные данные:
Натуральное трёхзначное число K

Выходные данные:
Число K

, записанное в обратном порядке.

Sample Input 1:

248

Sample Output 1:

842

Sample Input 2:

230

Sample Output 2:

32


*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int K, k1, k3, k2;
 int main()
{

 scanf("%d",&K);

 k1 = (int)K/100;
 k3 = (int)K%10;
 k2 = (K%100)/10;
  printf("%d%d%d", k3, k2,k1);

 //printf("\n\nStarshayaifra drobnoj chasti=%d\nMladshaya cifra celoj chasti=%d\n" ,((M*10)/N)%10,((M/N)%10));
 return 0;
}

/*better code

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    printf("%d", n%10*100+n/10%10*10+n/100);
}

*/
