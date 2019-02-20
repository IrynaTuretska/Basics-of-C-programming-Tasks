/*
10.1 Функции и переменные
  

Форматирование даты
Написать функцию print_date(int d, int m, int y, int k), которая выводит дату в одном из указанных форматов.
при k = 0: dd.mm.yy
при k = 1: dd.mm.yyyy
при k = 2: yyyy/mm/dd

Входные данные:
Четыре числа:
первое число -- номер дня в месяце ,
второе число -- номер месяца,
третье число -- год,
четвёртое число -- формат.

Выходные данные:
Дата в указанном формате.

Sample Input 1:

26 12 2017 0

Sample Output 1:

26.12.17

Sample Input 2:

7 11 1917 1

Sample Output 2:

07.11.1917

*/
#include <stdio.h>
void print_date(int d, int m, int y, int k){
// опишите здесь тело функции print_date
    switch(k){
        case 0:printf("%02d.%02d.%02d", d, m, y%100);break;
        case 1:printf("%02d.%02d.%d",d, m, y);break;
        case 2:printf("%d/%02d/%02d", y, m, d);break;

        default: printf("ERROR!\n");
    }

}
int main(){
    // напишите программу, использующую функцию print_date
    int d, m, y, k;

    scanf("%d%d%d%d", &d, &m, &y, &k);

    print_date(d, m, y, k);

    return 0;
}

/*
 * better code
 *
#include <stdio.h>
void print_date(int d, int m, int y, int k){
    switch (k) {
        case 0 : printf("%d%d.%d%d.%d%d", d/10, d%10, m/10, m%10, y/10%10, y%10); break;
        case 1 : printf("%d%d.%d%d.%d", d/10, d%10, m/10, m%10, y); break;
        case 2 : printf("%d/%d%d/%d%d", y, m/10, m%10, d/10, d%10);
    }
}
int main(){ 
    int a, b, c, d;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    print_date(a, b, c, d);
}
*/
