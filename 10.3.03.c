/*
10.3 Аргументы функций
  


Написать функцию void minmax(int * x, int * y), записывающую в переменную x минимальное из значений x и y, а в переменную y -- максимальное из этих значений.

Sample Input:

4435 21

Sample Output:

21 4435

*/

void minmax(int * x, int * y){

    if(*x > *y){
        int tmp_x = *x;
        *x = *y;
        *y = tmp_x;
    }

}

/*
 * beter code
 *
void minmax(int * a, int * b){
    if (*a > *b) {
        int t = *a;
        *a = *b;
        *b = t;
    }
}

*/
