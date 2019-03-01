/*

1.1 Первая программа на Си

Вы смотрели фильм «Матрица»? Если нет, то советую посмотреть. А задание будет следующим: переписать программу «Hello, world!» так, чтобы на экране появился следующий текст:

Wake up, Neo...

The Matrix has you...

Follow the white rabbit...

Подсказка: Вы можете использовать сколько угодно символов "\n". Строки с текстом разделены пустой строкой.

 Sample Output:

Wake up, Neo...

The Matrix has you...

Follow the white rabbit...
*/

#include <stdio.h>

int main(void) {
  printf("Wake up, Neo...\n\n");
  printf("The Matrix has you...\n\n");
  printf("Follow the white rabbit...\n");
  return 0;
}


/*
#include <stdio.h>

int main() {
  printf("Wake up, Neo...\n\nThe Matrix has you...\n\nFollow the white rabbit...");
}
*/

