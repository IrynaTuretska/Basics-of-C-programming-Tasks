/*

   10.3 Аргументы функций
   7 из 14 шагов пройдено
   6 из 13 баллов  получено
   Вы прошли больше 80% курса, оставьте отзыв

   Написать функцию int gcd(int x, int y), которая ищет наибольший общий делитель для чисел x и y.

   Sample Input:

   14 49

   Sample Output:

   7

 */

int gcd(int x, int y){

        int nod=1;
        for (int i=1; i<=(x>y ? y : x); i++)
                (!(x%i) && !(y%i) && i>nod) ? nod=i : 0;
        return nod;
}

/*
 * better code
 *
   int gcd(int x, int y){
    while (x*y!=0) {
        if (x > y) x %= y; else y %= x;
    }
    return x+y;
   }

 */
