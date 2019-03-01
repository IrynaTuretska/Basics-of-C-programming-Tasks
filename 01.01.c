/*
1.1 Первая программа на Си


Напишите программу, которая выводит на экран следующие строки:

Hello, World!
The world is yours!

 Sample Output:

Hello, World!
The world is yours!
*/

#include <stdio.h>

int main(void) {
  printf("Hello, World!\n");
  printf("The world is yours!");
  return 0;
}


/*better code

#include <stdio.h>

int main() {
  puts("Hello, World!");
  puts("The world is yours!");
  return 0;
}

*/