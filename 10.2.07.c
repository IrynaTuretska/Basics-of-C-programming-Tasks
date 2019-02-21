/*
10.2 Указатели
  

Гилл Байтс написал программу, которая меняет значения двух целочисленных переменных местами. При этом, он поспорил со своим другом Стэном Добсом, что сможет сделать это, используя лишь указатели на данные переменные и дополнительную переменную temp.

Помогите Гиллу выиграть спор. Исправьте следующую программу соответствующим образом.

P.S. Полный исходный код задачи доступен на форуме для решивших задачу.

Sample Input:

1 5

Sample Output:

5 1

*/

// int * p_1 ссылается на первую переменную
// int * p_2 ссылается на вторую переменную

  int temp;
  temp = *p_1;
  *p_1 = *p_2;
  *p_2 = temp;

  /*
   * better code
   *
#include <stdio.h>
int main(void) {

  int a=0, b=0;
  scanf("%d %d", &a, &b);
  int * p_1 = &a;
  int * p_2 = &b;

  int temp;
  temp = *p_1;
  *p_1 = *p_2;
  *p_2 = temp;
    
  printf("%d %d", a, b);
return 0;
}

*/
