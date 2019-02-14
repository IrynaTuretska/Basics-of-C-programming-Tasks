/*
9.3 Стандартные функции работы со строками.
  

Программа приветствие
Допишите программу приветствие. Программа должна склеивать строку, которая уже есть в программе и строку, введенную пользователем.

Входные данные:
Одна символьная строка. Длина строки не более 20 символов.

Выходные данные:
Строка приветствия пользователя.

Sample Input:

KaDeaT

Sample Output:

Hello, KaDeaT

*/

#include <stdio.h>
#include <string.h>

int main(void) {
    char str1[40] = "Hello, ";
    char str2[20];
    scanf("%s", str2);

    strcat(str1, str2);

    puts(str1);




    return 0;
}

/*
 * better code
 *
 #include <stdio.h>

int main(void) {
    char s[100]; gets(s); char s1[] = "Hello, ";
    strcat(s1, s);
    printf("%s", s1);
}
*/
