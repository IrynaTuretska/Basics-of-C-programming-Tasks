/*
Слова.
Подсчитать количество слов в строке. Под словом будем понимать непустую последовательность символов, разделённую знаками пробела.

Входные данные:
Символьная строка состоящая из слов, разделённых пробелами. Длина строки не превышает 100 символов.

Выходные данные:
Одно целое число -- количество слов во входной символьной строке.

Внимание: ﻿здесь и далее формат строки такой: "YoungCoder.ru 2014 - 2018\n\0".

Sample Input:

YoungCoder.Ru 2014 - 2018

Sample Output:

4

*/

#include <stdio.h>

int main() {

    char word[128];
    int n = 1;
    int arr[128] = {0};

    fgets(word, 128, stdin);
    int i;

    for (i = 0; word[i] != 10; i++){
        arr[i] = word[i];

    }

    for (int j = 0; word[j] != 10; j++){
        if(arr[j] == 32 && arr[j+1] != 32){
         ++n;
    }

    }

    printf("%d ", n);
    return 0;
}
/*
 * better code
 *
#include <stdio.h>

int main() {
    char s[100]; int k =0;
    gets(s);
    for (int i = 0; i < strlen(s); i++) {
        k += s[i] == ' ' && s[i-1] != ' ' ? 1 : 0;
    }
    printf("%d", k+1);
}
*/
