/*
 *
Поменять местами столбцы с минимальной и максимальной суммой элементов.

Входные данные:
Два натуральных числа N
и M. Далее с новой строки N строк по M целых чисел в каждой. N и M

не превышают десяти.

Выходные данные:
Вывести исходную матрицу N
на M

, в которой столбцы с минимальной и максимальной суммой элементов поменяны местами. Числа разделять пробелами. Если присутствует несколько столбцов с одинаковой минимальной суммой элементов, то использовать первый по порядку. Аналогично с максимальной суммой.

Sample Input:

3 4
1 2 3 4
1 3 4 5
0 2 3 -2

Sample Output:

3 2 1 4
4 3 1 5
3 2 0 -2

*/

#include <stdio.h>

int main() {
    int n, m ;
    scanf("%d %d", &n, &m);
    int arr[n][m];

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++)
            scanf("%d", &arr[i][j]);
    }

    int max = 0, min = 0;

    int min_index = 0, max_index = 0;

    for (int j = 0; j < m; j++){
        int sum = 0;
        for (int i = 0; i < n; i++)
            sum += arr[i][j];
        max = sum > max ? sum : max;
        max_index = max == sum ? j : max_index;

        min = sum < min ? sum : min;
        min_index = min == sum ? j : min_index;


    }



    for (int i = 0; i < n; i++){
        int temp = arr[i][min_index];
        arr[i][min_index] = arr[i][max_index];
        arr[i][max_index] = temp;
    }

    for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++)
            printf("%d ", arr[i][j]);
        printf("\n");
    }

}

/*
 * better code
 *
 #include <stdio.h>

int main() {
    int n, k, m = 1000, m1, x = -1000, x1; 
    scanf("%d %d", &n, &k);
    int a[n][k], b[k];
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            b[j] = i == 0 ? 0 : b[j];
            scanf("%d", &a[i][j]);
            b[j] += a[i][j];
        }
    }
    for (int i = 0; i < k; i++) {
        m1 = m > b[i] ? i : m1;
        m = m > b[i] ? b[i] : m;
        x1 = x < b[i] ? i : x1;
        x = x < b[i] ? b[i] : x;
    }
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            printf("%d ", j == m1 ? a[i][x1] : j == x1 ? a[i][m1] : a[i][j]);
        }
        printf("\n");
    }
}

*/
