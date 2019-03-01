/*
10.1 Функции и переменные
 
  

Квадрат.
Напишите функцию с именем square(n,c), которая выводит на экран квадрат размера n на n, заполненный символами c. Например:

square(4,#);
выведет:
####
####
####
####

Входные данные:
Одно целое число и символ заполнитель.

Выходные данные:
Квадрат из символов, указанного формата.

Sample Input 1:

3 #

Sample Output 1:

###
###
###

Sample Input 2:

5 .

Sample Output 2:

.....
.....
.....
.....
.....

Sample Input 3:

8 *

Sample Output 3:

********
********
********
********
********
********
********
********

Sample Input 4:

6 %

Sample Output 4:

%%%%%%
%%%%%%
%%%%%%
%%%%%%
%%%%%%
%%%%%%

*/

#include<stdio.h>

void square(int n, char c){
    int i, j;

        for(int i=0; i < n; i++){
    	for(int j = 0; j < n; j++){
    	printf("%c", c);
    	}
    	printf("\n");
    }
}


int main(void){
    int n;
    char c;
    scanf("%d %c",&n,&c);

    square(n,c);

    return 0;
}

/*
 * better code
 *
#include <stdio.h>
void square(int x, char c){
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < x; j++) {
            printf("%c", c);
        }
        printf("\n");
    }
}
int main(){ 
    int k; char c;
    scanf("%d %c", &k, &c);
    square(k, c);
}
*/
