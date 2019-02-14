/*
9.3 Стандартные функции работы со строками.
  

Имя файла.
Вывести полное название файла в формате

имя_файла.расширение

Входные данные:
Две символьных строки, записанные каждая с новой строки. В первой строке записано имя файла (не более 25 символов), а во второй -- его расширение (3 символа).

Выходные данные:
Одна строка указанного формата.

Sample Input:

Stepik
exe

Sample Output:

Stepik.exe

*/
#include <stdio.h>
#include <string.h>

int main(void) {
    char str1[40];
    char str2[20];
    scanf("%s", str1);
    scanf("%s", str2);

    //strcat(str1, str2);

    printf("%s.%s",str1,str2);




    return 0;
}

/*
 * better code
 *
#include <stdio.h>

int main() {
    char s[100], s1[100];
    gets(s); fflush(stdin); gets(s1);
    printf("%s.%s", s, s1);
}
*/
