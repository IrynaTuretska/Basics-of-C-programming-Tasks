/*
Усовершенствовать программму, написанную на прошлом шаге. Дополнительно на отдельной строке вывести количество напечатанных чисел.

Входные данные:
Два целых числа K,M
. При этом M больше K

.

Выходные данные:
Натуральные числа в порядке возрастания принадлежащие промежутку [K,M]

. Числа нужно разделять одним пробелом.
На новой строке вывести количество выведенных натуральных чисел.

Sample Input 1:

3 12

Sample Output 1:

3 4 5 6 7 8 9 10 11 12 
10

Sample Input 2:

-3 3

Sample Output 2:

1 2 3 

*/


#include <stdio.h>

int main(void) {

  int K = 0, M = 0, b = 0;

  scanf("%d%d", &K, &M);

 
  if ( M > 0 && M > K ){
  
   if(K <=0)
     K = 1;
  
   for (int a = K; a <= M; a++){

     printf("%d ", a);
     b = b+1;
     
    }
     printf("\n%d ", b);


  }else printf("ERROR!");
 
  
  return 0;
}


/*better  code

#include <stdio.h>

int main() {
    int k, m, n = 0;
    scanf("%d %d", &k, &m);
    if (k < 1) k = 1;
    for (int i = k; i <= m; i++) {
        printf("%d ", i);
        n++;
    }
    printf("\n%d", n);
}

*/