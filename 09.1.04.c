/*
 

Определить тип символа.

Входные данные:
Один символ. Либо буква латинского алфавита, либо цифра.

Выходные данные:
digit -- если это цифра, en -- если это буква латинского алфавита. В иных случаях вывести error.

Sample Input 1:

x

Sample Output 1:

en

Sample Input 2:

Q

Sample Output 2:

en

Sample Input 3:

l

Sample Output 3:

en

*/

#include <stdio.h>
#include <string.h>

int main ( int argc, char *argv[] )
{
    char str[256];
    int num = 0;

    fgets(str, 2, stdin);
    fflush (stdin);
    for ( int i = 0; i < strlen(str); i ++ )
    {
        num = -1;
        if ( str[i] >= 'a' && str[i] <='z' ){
            num = 1;}
        else if ( str[i] >= 'A' && str[i] <='Z' ){
            num = 1;}
        else if ( str[i] >= '0' && str[i] <='9' ){
            num = 2;}
        else num = 0;

    }

    if(num == 1){
      printf("en");
    }else if(num == 2){
      printf("digit");
    }else if(num == 0){
      printf("error");
    }

    return 0;
}

/*
 * better code
 *
#include <stdio.h>

int main() {
    char a;
    scanf("%c", &a);
    printf(a > 47 && a < 58 ? "digit" : (a > 64 && a < 90) || (a > 96 && a < 123) ? "en" : "error");
}
*/

