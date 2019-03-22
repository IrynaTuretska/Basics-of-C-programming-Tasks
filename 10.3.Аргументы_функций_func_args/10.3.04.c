/*
   10.3 Аргументы функций



   Написать функцию void char_register(char * ch, int fl), которая переводит переданный ей символ ch (символ латинского алфавита) в заданный переменной fl регистр: 0 -- нижний, 1 -- верхний.

   Если переданное в переменной ch значение не является символом латинского алфавита, то делать с ним ничего не нужно.

   Sample Input:

   y 1

   Sample Output:

   Y



 */

void char_register(char * ch, int fl){
        if(fl == 1)
        {
                if ('a' <= *ch && *ch <= 'z')
                        *ch += ('A' - 'a');
        }
        if(fl == 0)
        {
                if (*ch >= 'A' && *ch <= 'Z')
                        *ch += ('a' - 'A');
        }
}

/*
 * better code
 *
   void char_register(char * ch, int fl){
    if (fl) *ch = toupper(*ch);
    else *ch = tolower(*ch);

   }

 */
