/*
Написать программу для подсчёта различных символов, которые поступают на вход.

Входные данные:
Первая строка одно натуральное число N
. Далее с новой строки записаны через пробел N

символов латинского алфавита (как в верхнем, так и в нижнем регистре).

Выходные данные:
26

чисел, записанных через пробел. Первое число -- количество раз, которое во входных данных встречается буквы А или a, второе число -- количество раз, которое во входных данных встречается буквы B или b, и т.д.

Подсказки:
Не забывайте учитывать, что символы, которые поступают на вход, записаны через пробел

Sample Input:

10
A d s a a d L e s i

Sample Output:

3 0 0 2 1 0 0 0 1 0 0 1 0 0 0 0 0 0 2 0 0 0 0 0 0 0 




*/

#include <stdio.h>
#include <string.h>
 
int main ( )
{
    char str[256];
    int count[26];
    int num = 0; 
    int N = 0;
    
    scanf("%d\n", &N);
 

    fgets(str, N*2, stdin);
    fflush (stdin);


    for ( int i = 0; i < 26; i ++ )
        count[i] = 0;
    for ( int i = 0; i < strlen(str); i ++ )
    {
        num = -1;
        if ( str[i] >= 'a' && str[i] <='z' )
            num = str[i]-'a';
        if ( str[i] >= 'A' && str[i] <='Z' )
            num = str[i]-'A';
   

        if (num >= 0)
            count[num] ++;
    }
 
    for ( int i = 0; i < 26; i ++ )
    {
            printf("%d ", count[i]);
    }
 
    puts("");
 
    return 0;
}

/*
 * better code
 *
#include <stdio.h>
#include <string.h>

int main() {
    int n, cnt[26] = {};
    scanf("%d\n", &n);
    while (n--){
        char c;
        scanf("%c ", &c);
        if (c > 'Z') c -= 32;
        if (c >= 'A' && c <= 'Z') cnt[c-'A']++;
    }
    for (int i=0;i<26; i++) printf("%i ", cnt[i]);
}
*/
