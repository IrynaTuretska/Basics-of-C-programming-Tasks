/*3.1 Функция форматного вывода printf




Помогите Шерлоку Холмсу написать программу-визитку. [Image: https://ucarecdn.com/57ca4a94-9efe-4ab4-a7dd-be3f1fd12514/]

Программа должна выводить на экран информацию о координатах его дома на Бейкер Стрит.

Примечание: между grad и 31 стоит один пробел, а между grad и 9 - два.


S.Holmes: 
51grad 31'25.48" N
0 grad  9'29.93" W

Sample Input:


Sample Output:

S.Holmes:
51grad 31'25.48" N
0 grad  9'29.93" W

*/

#include <stdio.h>

int main() {
  printf("S.Holmes:\n51grad 31'25.48\" N\n0 grad  9'29.93\" W\n");
  return 0;
}

/*
 * better code
 *
#include <stdio.h>

int main() {
  printf("S.Holmes:\n\
51grad 31\'25.48\" N\n\
0 grad  9\'29.93\" W");
}
*/
