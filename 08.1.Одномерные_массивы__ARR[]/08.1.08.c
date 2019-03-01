/*
 *
В заданном массиве поменять местами первую и вторую половины.

Входные данные:
Первая строка число N,(N>0)
-- длина массива (чётное число). Длина массива не более 100 элементов. Вторая строка N

  натуральных чисел, записанных через пробел.

Выходные данные:
Новый массив, в котором сначала записаны элементы с номерами k,k+1,k+2,…,N
, а потом записаны элементы с номерами 1,2,3,…,k−1, где k -- номер (N/2+1)

-ого члена исходного массива. Между собой значения разделять одним пробелом.

Sample Input:

6
10 93 3 22 75 12

Sample Output:

22 75 12 10 93 3

*/

#include <stdio.h>

int main() {
    int N = 0;
    int a = 0;
    int tmp = 0;

    scanf("%d", &N);
    int A[N];

    for(int i = 0; i < N; ++i){
      scanf("%d", &A[i]);
    }

    for(int i = 0, b = N/2; i < N/2, b < N; ++i,++b){
        tmp = A[i];
        A[i] = A[b];
        A[b] = tmp;
        tmp = 0;
    }

    for(int i = 0; i < N; ++i)
    printf("%d ", A[i]);

    return 0;
}

/*
 * better code
 *
#include <stdio.h>
int main() {
    int arr[100],new_arr[100],n,sum=0,j=0;
    scanf("%d",&n);
    for(int i=0; i<n; i++) scanf("%d ",&arr[i]);
    for(int i=n/2; i<n; i++) { 
        new_arr[j] = arr[i]; 
        j++; 
    }
    for(int i=0; i<n/2; i++) {
        new_arr[j] = arr[i];
        j++;
    }
    for(j=0; j<n; j++) printf("%d ",new_arr[j]);
}
*/

