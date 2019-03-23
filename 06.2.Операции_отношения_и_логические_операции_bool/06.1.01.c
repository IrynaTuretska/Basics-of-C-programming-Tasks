/*
   6.2 Операции отношения и логические операции

   Сравнение чисел
   Напишите программу сравнивающие два целых числа.

   Входные данные:
   Два целых числа x
   , y

   Выходные данные:
   1 -- если x=y

   0 -- если x≠y

   Sample Input:

   -2 2

   Sample Output:

   0

 */
#include <stdio.h>

int main(void) {
        int x, y;

        scanf("%d%d",&x,&y);

        printf("%d", !(x!= y));


        return 0;
}

/*better code

 #include <stdio.h>

   int main() {
    int x, y;
    scanf("%d %d", &x, &y);
    printf("%d", x == y);
   }
 */
