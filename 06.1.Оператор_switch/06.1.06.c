/*
   6.1 Оператор switch

   В третьем уроке был приведён код программы, которая подсчитывает уровень базового обмена веществ по формуле Миффлина-Сан Жеора исходя из данных, которые вы введёте (возраст, рост и вес). Модифицируйте данную программу так, чтобы она дополнительно принимала и учитывала сведения о половой принадлежности человека.

   Входные данные:
   Один символ и три целых числа.
   Символ f (female) или m(male), обозначающий половую принадлежность.
   Первое число a
   -- целое, возраст человека
   Второе число h -- целое, рост человека в сантиметрах
   Третье число w

   -- целое, вес человека в килограммах.

   Выходные данные:
   Вывести уровень базового обмена веществ в таблице, оформленной в соответствии примером ниже. Если первый аргумент не является символом f или m, то необходимо вывести одно слово ERROR!

   Sample Input 1:

   m 25 178 67

   Sample Output 1:

 |  BMR  |
 |1662.50|

   Sample Input 2:

   d 22 160 49

   Sample Output 2:

   ERROR!

 */

#include <stdio.h>
#include <math.h>
#include <stdlib.h>


int main(void){

        int age, height, weight;
        double bov_m, bov_f;
        char f, m, sex;

        //printf("Vash pol?(f ili m )\n");
        scanf("%c%d%d%d", &sex,&age,&height,&weight );

        //printf("Vash vozrast?(god)\n");
        //scanf("%d", &age); // считываем целое значение в переменную age

        //printf("Vash rost?(cm)\n");
        //scanf("%d", &height); // считываем  значение в переменную height

        //printf("Vash ves?(kg)\n");
        //scanf("%d", &weight); // считываем значение в переменную weight

        bov_m = 10*weight + 6.25*height - 5*age + 5;
        bov_f = 10*weight + 6.25*height - 5*age - 161;

        switch(sex) {

        case 'f': printf("|  BMR  |\n");
                printf("|%7.2f|\n",bov_f); break;
        case 'm': printf("|  BMR  |\n");
                printf("|%7.2f|\n",bov_m); break;
        default: printf("ERROR!\n"); break;


        }




        /*printf("|       BMR       |\n");
           //printf("|  male  | female |\n");

           printf("|%8.2f|\n",bov_m);
           printf("|%8.2f|\n",bov_f);

           default: printf("ERROR!\n"); break;
         */
        return 0;
}

/*better code

 #include <stdio.h>
   int main(void){
    int a, h, w; char c;
    scanf("%c %d %d %d", &c, &a, &h, &w);
    switch(c) {
        case 'm' : printf("|  BMR  |\n|%7.2lf|", 10*w+6.25*h-5*a+5); break;
        case 'f' : printf("|  BMR  |\n|%7.2lf|", 10*w+6.25*h-5*a-161); break;
        default : printf("ERROR!");
    }
   }

 */
