/*
9.2 Символьные строки

  

Число.
Дана строка. Определить является ли данная строка записью числа (целого или вещественного). Дробная и вещественная части разделены десятичной точкой.

Входные данные:
Строка символов.

Выходные данные:
Вывести int, если входная строка является целым числом, float, если входная строка является вещественным числом, иначе вывести error.

Примечание: ﻿строки вида ".012", "456." и пр. считать ошибочными (в рамках данной задачи. Вообще, такая формулировка является корректной в языке C, но именно в данной задаче считайте её ошибочной).

Sample Input 1:

1234

Sample Output 1:

int

Sample Input 2:

22.12

Sample Output 2:

float

*/

#include <stdio.h>
#include <string.h>
//#include <math.h>
int main(void) {
    char str[100];
	int c=0, i=0;
	gets(str);
	if (str[0] == '-'){i++;}
	if (str[0] == '.' || str[strlen(str)-1] == '.') {printf("error\n"); return 0;}
	for (i; i < strlen(str); i++){
	  if (str[i] == '.'){c++;}
	  if (str[i] < 48 && (str[i] != '.') || str[i] > 57 && (str[i] != '.') || c > 1) {printf("error\n"); return 0;}
	}
	printf( c ? "float\n" : "int\n");
    return 0;
}

/*
 * better code
 *
#include <stdio.h>
#include <string.h>
int main() {
    int t=0;
    char arr[20];
    scanf("%s", &arr);
    for(int i=0; i<strlen(arr); i++){
        if(arr[i]=='-') i++;
        if(arr[i]>57||arr[i]<46||t>1||arr[0]==46||arr[strlen(arr)-1]==46) {printf("error"); return 0;}
        if(arr[i]==46) t++;
        //printf("%d %d\n", arr[i],t);
    }
    if(t==0) printf("int");
    else if (t==1) printf("float");
        
    

 }

 */
