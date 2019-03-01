/*

Перевёртыш 
 Напишите программу, которая по данному натуральному N печатает его цифры в обратном порядке.
 
 Входные данные:
 Одно натуральное число N.
 
 Выходные данные: 
 Цифры числа N, записанные в обратном порядке.*

 Sample Input 1:

12938
Sample Output 1:

83921
Sample Input 2:

720
Sample Output 2:

027
Sample Input 3:

1
Sample Output 3:

1


 
 *
 *
 */


#include <stdio.h>

int main()
{

    int n;
    int  m = 0;

    scanf("%d", &n);

    while(n!=0)
    {
        //m = m * 10;

        m = (n%10);

        printf("%d", m);

        n = n/10;
    }



    return 0;
}

/*better code
 #include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    while (n!=0) {
        printf("%d", n%10); n/=10;
    }
}

 */
