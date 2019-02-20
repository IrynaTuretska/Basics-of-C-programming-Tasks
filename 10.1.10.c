/*
10.1 Функции и переменные
  

Переделайте функцию, написанную в прошлом уроке, таким образом, чтобы она возвращала число 1, если число K
простое, или 0, если число K

составное.

Sample Input 1:

8

Sample Output 1:

0

Sample Input 2:

2

Sample Output 2:

1


int is_prime(int k){
    print("factors:\n", k);
    for(i = 1; i<=n; i++)
      if(n/i==0)
        printf("%d ",i);
}

*/

int is_prime(int k){
    for(int i = 2; i <= (k/2); i++)
      if((k % i) == 0) return 0;
    return 1;
}

/*
 * better code
 *
int is_prime(int k){
    for (int i = 2; i < k; i++) {
        if (k % i == 0) return 0;
    }
    return 1;
}
*/
