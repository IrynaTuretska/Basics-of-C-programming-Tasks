/*
10.1 Функции и переменные
  

Последовательные множители.
Напишите функцию с именем sequence_multipliers, принимающую один аргумент x
, которая определяет можно ли представить x в виде произведения трех последовательных натуральных чисел. Например, 120=4⋅5⋅6

Входные данные:
Одно натуральное число N,(N<1000000)

.

Выходные данные:
k
-- первое число последовательности трёх натуральных чисел такое, что k(k+1)(k+2)=x, либо -1, если число x

нельзя представить в таком виде.

Sample Input 1:

120

Sample Output 1:

4

Sample Input 2:

9

Sample Output 2:

-1

*/
#include<stdio.h>


int sequence_multipliers(int p){
    int i;
    if(p > 1){
    for(i=-9999; i<= p; i++)
    {
    	if(p == i*(i+1)*(i+2))
    	return i;
     }

    }else
        return -1;
}


int main(void){
    int n;
    scanf("%d",&n);

    printf("%d",sequence_multipliers(n));

    return 0;
}

/*
 * better code
 *
#include<stdio.h>
int sequence_multipliers(int k){
    int l = 1;
    while (l*(l+1)*(l+2)<k) {l++;}
    return k==l*(l+1)*(l+2) ? l : -1;
}
int main(void){
    int k; scanf("%d", &k);
    printf("%d", sequence_multipliers(k));
}

*/
