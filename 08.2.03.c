/*
По заданному числу N сформировать матрицу (N×N

) следующего вида:

1  2    3   ...  n-1  n
n  n-1  n-2 ...  2    1
1  2    3   ...  n-1  n
n  n-1  n-2 ...  2    1
1  2    3   ...  n-1  n
n  n-1  n-2 ...  2    1


Входные данные:
Одно натуральное число N

.

Выходные данные:
Вывести на экран массив N
на N

, указанного вида. Числа разделять пробелами.

Sample Input 1:

4

Sample Output 1:

1 2 3 4 
4 3 2 1 
1 2 3 4 
4 3 2 1 

Sample Input 2:

5

Sample Output 2:

1 2 3 4 5 
5 4 3 2 1 
1 2 3 4 5 
5 4 3 2 1 
1 2 3 4 5 


*/ 


#include <stdio.h>


int main()
{
  int N = 0;
  

  scanf("%d", &N);

  int M = N;
  int ARR[N][M];

  for(int i = 0; i < N; ++i){
    for(int j = 0; j < M; ++j){
        int k = 1;
        ARR[i][j] = k+j; 
      }
    }

  for(int i = 0; i < N; ++i){
    if(i%2 == 0){
      for(int j = 0; j < M; ++j)
      printf("%d ", ARR[i][j]);

    }else if(i%2 == 1)
       for(int j = N-1; j >=0; --j)           
           printf("%d ", ARR[i][j]);
           printf("\n");  
       
       }


  return 0;
}

/*
 * better code
 *
#include <stdio.h>

int main() {
    int n; scanf("%d", &n); int a[n][n];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", i % 2 == 0 ? j+1 : n-j);
        }
        printf("\n");
    }
}
*/
