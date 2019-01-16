/*
Быстрое возведение в степень
Гилл Байтс на последнем занятии по информатике изучал алгоритм быстрого возведения числа a в степень k. Он основывается на следующем свойстве степени: a2k=ak∗ak

Например, вместо последовательного вычисления a2
, a3 и a4, можно после вычисления a2 умножить это число само на себя и получить сразу a4

.

Гилл решил обязательно запрограммировать этот алгоритм. Благо он уже прошёл тему циклы и быстро смог написать программу, реализующую подобный трюк. Вот её код:

#include <stdio.h>

int main(void) {
  int a = 0, k = 0;
  int res = 0;

  scanf("%d %d", &a, &k);
  res = 1;
//пока степень больше нуля
  while(k > 0){
// если степень чётная, то
    if (k%2 == 0){   
      res = res*res; // умножаем текущий результат на себя
      k = k/2;  // степень делим пополам
    }else { //если степень нечётная
      res = res * a; // то умножаем на исходное число
      k = k - 1;   // от степени вычитаем единицу
   }
 }
  printf("%d\n", res);

  return 0;
}


Он запустил свою программу и ввёл "2 3", программа выдала 8. При вводе 2 5 вывод был 32. Гилл решил показать свою программу преподавателю. Но преподаватель ввёл 2 6 и в ответ программа выдала 8. Разберитесь в алгоритме, который написал Гилл и исправьте программу так, чтобы она работала верно.


Входные данные:
Два натуральных числа a
и k

.

Выходные данные:
Одно целое число, равное ak

.

Подсказки:
можно воспользоваться функцией pow. Задание вы выполните, но в алгоритме не разберётесь. Как поступить решать вам.)
задание действительно сложное, если не получается, можете посмотреть описание данного алгоритма в интернете


 Sample Input 1:

2 5

Sample Output 1:

32

Sample Input 2:

2 6

Sample Output 2:

64

Sample Input 3:

6 6

Sample Output 3:

46656
*/

#include <stdio.h>

int main(void) {
  int a = 0, k = 0;
  int res = 0;

  scanf("%d %d", &a, &k);
  res = 1;

  while(k > 0){

    if (k%2 == 0){  //1/ 8 чётное //2/ 4 тоже чётное // 2
      a = a*a; //а во второй степени //2/ a2*a2 // a4*a4
      k = k/2;   //8/2 = 4 // 4/2 = 2 // 1
    }else {
      res = res * a;
      k = k - 1;
   }
 }
  printf("%d\n", res);

  return 0;
}
/*better code
#include <stdio.h>

int main(void) {
  int a, k;
  int res = 1;
  scanf("%d %d", &a, &k);
    
  for(int i = 0, even = k / 2; i < even; i++){
  	res *= (a * a);
  }

  if (k % 2) {
  	res *= a;
  }
    
  printf("%d\n", res);

  return 0;
}
 *
/