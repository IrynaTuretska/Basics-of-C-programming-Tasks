/*
Змейка
Для заданных чисел M и N сформировать матрицу, заполненную по спирали числами от 1 до M⋅N

https://ucarecdn.com/1db04bb0-4360-44d9-9729-4afd7f3ff278/

Входные данные:
Два натуральных числа N
и M. N и M не превышают 10.

Выходные данные:
Вывести на экран массив M
на N, указанного вида. Формат вывода каждого числа 3 знака на число, выравнивание по правому краю.

Sample Input:

6 7

Sample Output:

  1  2  3  4  5  6  7
 22 23 24 25 26 27  8
 21 36 37 38 39 28  9
 20 35 42 41 40 29 10
 19 34 33 32 31 30 11
 18 17 16 15 14 13 12




*/

#include <stdio.h>

    int main()

    {
        int N, M;
        scanf("%d%d", &N, &M);
        int mat[N][M];
        int number = 1;

        for(int i = 0; i <= N/2; i++) {
            for( int x = i; x < M-i; x++ ) {
             if( number <= N*M) {
                mat[i][x] =  number++;
             }
            }

            for( int y = 1+i; y < N-1-i; y++) {
              if( number <= N*M)
              {
                mat[y][M-1-i]= number++;
               }
            }

            for( int x = i; x < M-i; x++){
              if( number <= N*M)
              {
                mat[N-1-i][M-1-x] = number++;
               }
            }

            for( int y = 1+i; y < N-1-i; y++){
               if( number <= N*M) {
                 mat[N- 1 -y][i] = number++;
               }
            }

        }


        for(int y = 0; y < N; y++) {
            for(int x = 0; x < M; x++) {
                printf("%3d", mat[y][x]);

            }
            printf("\n");
        }

     return 0;
    }

/*
 * better code
 *
#include <stdio.h>
int main() {
    int n, m, dn, dm, d, i=0, n1=0, m1=-1, l=0;
    scanf("%d %d", &n, &m);
    int a[n*m];
    while(d=m+(n-1-m)*(l&1)-l/2){
        dn=(l&2?-1:1)*(  l&1);
        dm=(l&2?-1:1)*(++l&1);
        while(d--) a[(n1+=dn)*m+(m1+=dm)]=++i;}
    for(int i=0; i<n*m; i++)
        printf("%3d%s", a[i], (i+1)%m?"":"\n");
}
*/
