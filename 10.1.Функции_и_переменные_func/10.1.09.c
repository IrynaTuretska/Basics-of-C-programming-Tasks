/*
10.1 Функции и переменные
 
  

Помогите Гиллу Байтсу исправить ошибки в программе.

Задача состояла в том, чтобы написать функцию выводящую все делители числа K

, поступившего на вход.

Sample Input 1:

859

Sample Output 1:

1 859 

Sample Input 2:

357

Sample Output 2:

1 3 7 17 21 51 119 357 


void factors(int k){
    for(i = 1; i<=n; i++)
      if(n/i==0)
        printf("%d ",i);
}

*/

void factors(int k){
    for(int i = 1; i<=k; i++){
      if(k%i==0)
        printf("%d ",i);
    }
}

/*
 * better code
 *
 void factors(int k){
    for(int i = 1; i <= k; i++) {
      if (k % i == 0) {
          printf("%d ", i);
      }
    }
}
*/
