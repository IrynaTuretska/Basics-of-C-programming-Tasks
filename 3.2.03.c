/*


Добавьте в следующую программу (конвертер валют) считывание данных и исправьте ошибки, которые допущены в шаблоне.

На вход программе поступают два числа.

Первое  число — количество долларов(целое число), которое мы хотим перевести в рубли.

Второе — курс доллара.

На выходе хотим получить сумму после пересчёта в рубли.

Sample Input:

695 0.6151588177048428

Sample Output:

427.5353783048658

*/

#include <stdio.h>
int main(void){
  int dollars;
  double kurs,rub;
    scanf("%d",&dollars);
    scanf("%lf",&kurs);
  rub = dollars*kurs;
  printf("%lf\n",rub);
  return 0;
}
/*
 * better code
 *
#include <stdio.h>
int main(void){
    int d; double k;
    scanf("%d %lf", &d, &k);
    printf("%lf", d * k);
}
*/
