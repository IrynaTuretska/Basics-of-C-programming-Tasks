/*


Длина строки.
Подсчитать количество символов в строке, без учёта нуль-символа.

Входные данные:
Символьная строка

Выходные данные:
Одно целое число -- длина входной символьной строки.

Подсказки:
Формат входных данных: "YoungCoder.Ru\0\n"

Sample Input:

YoungCoder.Ru

 Sample Output:

13

*/

#include <stdio.h>
#include <string.h>

int main(void) {
  char str1[256];
  fgets(str1,256,stdin);

  int l1 = strlen(str1);
  printf("%d\n", l1-1);

  return 0;
}

/*
 * better code
 *
#include <stdio.h>

int main() {
    // put your code here
    char word[128];
    fgets(word, 128, stdin);
    int i;
    for (i = 0; word[i] != '\0'; i++);
    printf("%d ", i);
    return 0;
}

*/
