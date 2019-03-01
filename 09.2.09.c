/*
Форматированный вывод числа.
Написать программу, реализующую вывод числа с разделением на триады цифр.

Входные данные:
Целое положительное число.

Выходные данные:
Вывести введённое число, отформатированное соответствующим образом. Лишние пробелы в конце и начале строки считаются ошибкой.

Примечание: ﻿число, имеющее при себе один или два разряда, вывести без изменений.

Sample Input:

1235521

Sample Output:

1 235 521


*/

#include <stdio.h>

void punt(int n){
    char s[28];
    int i = 27;
    if(n<0){n=-n; putchar('-');}
    do{
        s[i--] = n%10 + '0';
        if(!(i%4) && n>9)s[i--]=' ';
        n /= 10;
    }while(n);
    puts(&s[++i]);
}


int main(){

    int a;
    scanf("%d",&a);
    punt(a);

}

/*
 * better code
 *
#include <stdio.h>

int main() {
    char str[50];
    int len = 0;   
    scanf("%48[^\n]%n", str, &len);
    
    int start = len % 3;
    
    for(int i = 0; i < len; i++) {        
        if(i == start && i != 0) {
            printf(" ");
        } else if((i - start) % 3 == 0 && i != 0) {
            printf(" ");
        }    
        printf("%c", str[i]);
    }   
    
   return 0;
}
*/
