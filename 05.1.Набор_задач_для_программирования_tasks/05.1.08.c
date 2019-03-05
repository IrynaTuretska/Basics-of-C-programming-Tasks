/*5.1 Набор задач для программирования



Найти частное произведений цифр, сооветствующих четным и нечетным разрядам четырехзначного числа.

Входные данные:
Натуральное четырёхзначное число A=a4a3a2a1

Выходные данные:
Вещественное число х

, полученное от деления произведения цифр четных разрядов числа А на произведение цифр нечётных разрядов числа А.

Sample Input:

3421

Sample Output:

1.50

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int A;
double res,a4, a3, a2, a1, sum_chet, sum_nechet;

 int main()
{

scanf("%d", &A);

a4 = A/1000;
a3 = (A/100)%10;
a2 = (A/10)%10;
a1 = A%10;

sum_chet = (a4*a2);
sum_nechet = (a3*a1);

res = (sum_chet/sum_nechet);

printf("%.2lf" , res);
 
 return 0;
}

/*better code

#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    printf("%.2lf", (double)((n/1000)*(n/10%10))/((n/100%10)*(n%10)));
}

*/
