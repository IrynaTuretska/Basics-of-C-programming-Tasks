/*
   6.3 Условный оператор if-else


   Определить правильность даты, введенной с клавиатуры (число — от 1 до 31, месяц — от 1 до 12). Если введены некорректные данные, то сообщить об этом.

   Входные данные:
   Два целых числа: первое -- число в месяце, второе -- номер месяца в году.

   Выходные данные:
   Строка correct, если дата правильная, и строка error, если подобной даты не может быть.

   Подсказки:
   Предполагаем, что в феврале 29 дней.

   Sample Input:

   19 5

   Sample Output:

   correct

 */
#include <stdio.h>
#include <math.h>

int main(void) {

        int day, month,sum;

        scanf("%d%d", &day, &month);

        switch (month) {

        case 1: if(day > 31) {
                        printf("error");
        } else
                        printf("correct"); break;

        case 2: if (month == 2 && day > 29) {
                        printf("error");
        }else
                if (month == 2 && day <= 29)
                        printf("correct"); break;

        case 3: if(day > 31) {
                        printf("error");
        } else
                        printf("correct"); break;

        case 4: if(day > 30) {
                        printf("error");
        } else
                        printf("correct"); break;

        case 5: if(day > 31) {
                        printf("error");
        } else
                        printf("correct"); break;

        case 6: if(day > 30) {
                        printf("error");
        } else
                        printf("correct"); break;

        case 7: if(day > 31) {
                        printf("error");
        } else
                        printf("correct"); break;

        case 8: if(day > 31) {
                        printf("error");
        } else
                        printf("correct"); break;

        case 9: if(day > 30) {
                        printf("error");
        } else
                        printf("correct"); break;

        case 10: if(day > 31) {
                        printf("error");
        } else
                        printf("correct"); break;

        case 11: if(day > 30) {
                        printf("error");
        } else
                        printf("correct"); break;

        case 12: if(day > 31) {
                        printf("error");
        } else
                        printf("correct"); break;

        default: printf("error"); break;

        }


        return 0;
}

/*better code

 #include <stdio.h>

   int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    printf(((b==2)&&(a<30))||(((b==4)||(b==6)||(b==9)||(b==11))&&(a<31))
 ||(((b==1)||(b==3)||(b==5)||(b==7)||(b==8)||(b==10)||(b==12))&&(a<32))
           ? "correct" : "error");
   }

 */
