/*5.2 Набор задач для программирования - 2


Определить является ли натуральное число чётным или нечётным.

Входные данные:
Одно натуральное число k
. 0≤k≤100)

Выходные данные:
Число 1
, если k -- чётное и −1, если k

-- нечётное.

Подсказки:
Используйте остаток от деления на 2

Sample Input 1:

91

Sample Output 1:

-1

Sample Input 2:

0

Sample Output 2:

1

*/

#include <stdio.h>  
#include <math.h>

int main() { 

int b, a;
scanf("%d", &b);

 a = (b&1);

 if(a == 0)
 printf("1");
 else
 printf("-1");
 

 return 0;
} 

/*better code

#include <stdio.h>

int main() {
    int k;
    scanf("%d", &k);
    printf("%d", 1-2*(k%2));
}

*/
