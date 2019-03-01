/*

10.3 Аргументы функций
8 из 14 шагов пройдено
7 из 13 баллов  получено
Вы прошли больше 80% курса, оставьте отзыв
  
Написать функцию void reduce_fraction(int * a, int * b), которая будет сокращать дробь с числителем a и знаменателем b.
Используйте функцию gcd, написанную на прошлом шаге.

Sample Input:

14 49

Sample Output:

2 7

*/

int gcd(int x, int y){
    int nod=1;
    for (int i=1; i<=(x>y?y:x); i++)
        (!(x%i) && !(y%i) && i>nod)?nod=i:0;
    return nod;

}

void reduce_fraction(int * a, int * b){
   int tmp;
    tmp = *a;
    *a = (*a/gcd(*a,*b));
    *b = (*b/gcd(tmp,*b));
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

void reduce_fraction(int * a, int * b){
    int c = gcd(*a, *b);
    *a /= c; *b /= c;
}

*/
