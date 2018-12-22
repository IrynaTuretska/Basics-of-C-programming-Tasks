/*
Вывести через пробел все целые числа из промежутка [A,B],(A<B) в обратном порядке: от B до A.

Входные данные:
Два целых числа A,B
, при этом A<B

.

Выходные данные:
Целые числа из промежутка от [A,B]

, записанные через пробел в обратном порядке.

Sample Input:

3 12

Sample Output:

12 11 10 9 8 7 6 5 4 3

*/



#include <stdio.h>

int main() {

  int A = 0, B = 0, b = 0;

  scanf("%d%d", &A, &B);

 
  if ( B > A ){
  
  if(A <=0)
     A = 1;
  
     for (int a = B; (a >= A); a = a-1){

     printf("%d ", a);
     //b += 1;
     
     
     }//printf("\n%d ", b);

          

  }else printf("ERROR!");
 
  
  return 0;
}




/*better  code

#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    for (int i = b; i >= a; i--) {
        printf("%d ", i);
    }
}

*/