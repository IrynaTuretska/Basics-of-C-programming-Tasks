/*
10.3 Аргументы функций
  
Шифр Цезаря.
Написать функцию void char_cesar(char * ch, int shift), которая изменяет переданный ей символ ch по алгоритму Цезаря с ключом shift.

Шифр Цезаря заключается в замене текущего символа на тот, который находится в алфавите на k позиций правее. Например, буква a при сдвиге 2 будет заменена на букву c, буква x при сдвиге 4 будет заменена на букву b, т.к. мы считаем алфавит зацикленным.

Sample Input 1:

a 2

Sample Output 1:

c

Sample Input 2:

x 4

Sample Output 2:

b

*/

void char_cesar(char * ch, int shift){
    //char c = (*ch + shift);

    if(*ch+shift > 122){
        *ch = *ch+shift - 26;
    }else if(*ch+shift <= 122){
        *ch = *ch + shift;
    }

}

/*
 * better code
 *
void char_cesar(char * ch, int fl){
    *ch = (*ch+fl)-26*(*ch+fl>122);
}

*/
