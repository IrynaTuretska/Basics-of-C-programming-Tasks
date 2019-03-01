/*10.3 Аргументы функций



Напишите функцию int abs_arr(int arr[], int n), которая заменяет отрицательные элементы массива их модулями. Кроме того, функция должна возвращать количество произведенных замен.

Sample Input:

5
10 -93 22 75 12

Sample Output:

1 10 93 22 75 12

*/

int abs_arr(int arr[], int n){
    arr[n];
    int a = 0;
    for(int i = 0; i < n; ++i){
         if(arr[i] < 0){
            arr[i] = fabs(arr[i]);
             ++a;
         }
    }
    return a;

}

/*better code

int abs_arr(int arr[], int n){
    int k = 0;
    for (int i = 0; i < n; i++) {
        k += arr[i] < 0 ? 1 : 0;
        arr[i] = arr[i] < 0 ? -arr[i] : arr[i];
    }
    return k;
}

*/




