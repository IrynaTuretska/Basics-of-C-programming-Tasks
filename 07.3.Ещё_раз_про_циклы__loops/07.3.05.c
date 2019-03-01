/*
Возрастающая последовательность 
Последовательность назовём возрастающей, если каждый её следующий член больше предыдущего. Написать программу, проверяющую является ли последовательность возрастающей.

Входные данные:
Последовательность целых чисел. Признак окончания последовательности - число -9999. В последовательности всегда есть хотя бы два числа, кроме числа -9999.

Выходные данные: 
YES -- если последовательность является возрастающей, NO в противном случае.

Sample Input 1:

2 4 6 9 11 23 43 54 75 76 79 -9999
Sample Output 1:

YES
Sample Input 2:

2 4 6 9 11 75 23 43 54 76 79 -9999
Sample Output 2:

NO

*/

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int n;
    int i,r,r1;

    bool yes = false;

    scanf("%d", &n);

  while(n != -9999 ){

    r1 = n;

    scanf("%d", &n);

    if(n == -9999)
    break;

    if(r1 >= n){
           printf("%s","NO");
           return 0;

    }else if(r1 < n || n == -9999){
      yes = true;}


  }
  if(yes = true){
  printf("%s","YES");
  }else printf("%s", "NO");


    return 0;
}

/*
 * better code
#include <stdio.h>

int main() {
    int a, b, k = 0; scanf("%d", &a);
    do {
        scanf("%d", &b);
        if (a >= b) {
            k++;
        }
        a = b;
    } while(b+9999);
    printf(k == 1 ? "YES" : "NO");
}
*/
