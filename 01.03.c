/*
1.1 Первая программа на Си

Напишите программу, которая выводит на экран следующие строки:

NICKNAME: Neo
CITY: St-Petersburg
AGE: 35
HEIGHT: 180
WEIGHT: 75

Sample Input:


Sample Output:

NICKNAME: Neo
CITY: St-Petersburg
AGE: 35
HEIGHT: 180
WEIGHT: 75

*/

#include <stdio.h>

int main() {
  printf("NICKNAME: Neo\n"
"CITY: St-Petersburg\n"
"AGE: 35\n"
"HEIGHT: 180\n"
"WEIGHT: 75");
  return 0;
}
/*
 * better code
 *
#include <stdio.h>

int main() {
  printf("NICKNAME: Neo\nCITY: St-Petersburg\nAGE: 35\nHEIGHT: 180\nWEIGHT: 75");
}
*/
