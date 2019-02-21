/*
10.2 Указатели
 
P.S. Указатели это не сложно, но к ним нужно привыкнуть.  )))) 

В программе имеются две целочисленные переменные a и b. Объявите два указателя с именами p_a и p_b, которые ссылаются соответствующие переменные.

Здесь и далее напишите именно то, что указано в задании, не используя include, main и т.п.

P.S. Полный исходный код задачи доступен на форуме для решивших задачу.

Sample Input:

5 6

Sample Output:

11

// выше объявлены целочисленные переменные a и b
// создайте указатели p_a и p_b, ссылающиеся на них
//

*/

// выше объявлены целочисленные переменные a и b
// создайте указатели p_a и p_b, ссылающиеся на них
int * p_a = &a;
int * p_b = &b;

/*
 * better code
 *
int * p_a = &a, *p_b = &b;

*/
