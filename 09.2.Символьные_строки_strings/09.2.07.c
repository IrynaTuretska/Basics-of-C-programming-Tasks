/*
Капитан Флинт зарыл клад на Острове сокровищ. Есть описание, как найти клад.
Описание состоит из строк вида: "North 5", где первое слово – одно из "North", "South", "East", "West", а второе целое число – количество шагов, которое необходимо пройти в этом направлении.

Напишите программу, которая по описанию пути к кладу определяет точные координаты клада, считая, что начало координат находится в начале пути, ось OX направлена на восток, ось OY – на север.

Входные данные:
В первой строке натуральное число N
. Затем с новой строки N

строк, указанного формата.

Выходные данные:
Вывести координаты клада – два целых числа через пробел.

Sample Input:

3
North 2
East 3
South 1

Sample Output:

3 1

*/

#include <stdio.h>

int main()

{
  int x=0, y=0, vector, N;
    char str[5];
    scanf("%d",&N);
    for(int i=0;i<N;++i){
        scanf("%s %d", &str, &vector);
        if(strcmp(str, "East") == 0)
            x+=vector;
        else {
            if(strcmp(str, "West") == 0)
            x-=vector;
        else {
            if(strcmp(str, "North") == 0)
            y+=vector;
        else if(strcmp(str, "South") == 0)
            y-=vector;
            }
        }
    }
    printf("%d %d", x, y);
}

/*
 * better code
 *
#include <stdio.h>

int main() {
    int k, a, x = 0, y = 0; scanf("%d", &k);
    char s[10];
    while (k--) {
        scanf("%s", s); scanf("%d", &a);
        x += s[0] == 'E' ? a : s[0] == 'W' ? -a : 0;
        y += s[0] == 'N' ? a : s[0] == 'S' ? -a : 0;
    }
    printf("%d %d", x, y);
}
*/
