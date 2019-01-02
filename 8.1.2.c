/*
 *
Палиндром
Определить является ли массив палиндромом, т.е. первый элемент равен последнему, второй предпоследнему и т.д.

Входные данные:
Первая строка число N,(N>0)
-- длина массива. Длина массива не более 100 элементов. Вторая строка N

  целых чисел, записанных через пробел

Выходные данные:
YES -- если массив является палиндромом, NO -- в противном случае. 


 Sample Input 1:

5
 10 -93 22 75 12

Sample Output 1:

NO

Sample Input 2:

4
1 2 2 1

Sample Output 2:

YES
 *
/
#include <stdio.h>

 
int main ()
{
    int n;              // размер массива
    scanf("%d",&n);

    if (n < 1) return 0; // массив не может быть меньше 1
    
    int a[n];

    int i;
    for (i = 0; i <= n-1; i++)
    {
        scanf("%d", &a[i]);
    }
 
    int k, palindrome = 1;
    for (i=0, k=n-1; i<k && palindrome; i++, k--)
        if (a[i] != a[k]) palindrome = 0;        
    printf("%s ", palindrome? "YES" : "NO");

    return 0;
}



/*
 * #include <stdio.h>

int main() {
    int k, b = 0; scanf("%d", &k); int a[k];
    for (int i = 1; i <= k; i++) {
        scanf("%d", &a[i]);
    } for (int i = 1; i <= k / 2; i++) {
        b = a[i]==a[k-i+1] ? ++b : b;
    }
    printf(b == k/2 ? "YES" : "NO");
}
*/
