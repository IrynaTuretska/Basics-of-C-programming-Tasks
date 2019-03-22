/*
   9.3 Стандартные функции работы со строками.


   Азбука Морзе.
   Написать программу, которая переводила бы строку на английском языке в морзянку.

   Входные данные:
   Строка, состоящая из букв латинского алфавита. Длина строки не более 50 символов.

   Выходные данные:
   Строка, соответствующая коду Морзе исходной строки. Пробел между словами заменить на знак "|:_..._:|". Отдельные символы разделять между собой  "|".

   https://ucarecdn.com/79e042ea-712d-41e0-8bd0-27b1d0a59029/

   Sample Input:

   happy new year

   Sample Output:

   ....|.-|.--.|.--.|-.--||:_..._:|-.|.|.--||:_..._:|-.--|.|.-|.-.|

 */

char*a[]={".-.-.-","--..--","..--..","|:_..._:",".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--..","-----",".----","..---","...--","....-",".....","-....","--...","---..","----."},
    *k=".,? ",
    *p,x;

main()

{
        while((x=toupper(getchar()))-10) {p=strchr(k,x);
                                          printf("%s|",p ? a[p-k] : isdigit(x) ? a[x-18] : isalpha(x) ? a[x-61] : 0);}

}
/*
 * better code
 *
 #include <stdio.h>

   int main() {
    char s[100]; gets(s); char c[100];
    for (int i = 0; i < strlen(s); i++) {
        switch (s[i]) {
                case 'a' : printf(".-|"); break;
                case 'b' : printf("-...|"); break;
                case 'c' : printf("-.-.|"); break;
                case 'd' : printf("-..|");break;
                case 'e' : printf(".|");break;
                case 'f' : printf("..--.|");break;
                case 'g' : printf("--.|");break;
                case 'h' : printf("....|");break;
                case 'i' : printf("..|");break;
                case 'j' : printf(".---|");break;
                case 'k' : printf("-.-|");break;
                case 'l' : printf(".-..|");break;
                case 'm' : printf("--|");break;
                case 'n' : printf("-.|");break;
                case 'o' : printf("---|");break;
                case 'p' : printf(".--.|");break;
                case 'q' : printf("--.-|");break;
                case 'r' : printf(".-.|");break;
                case 's' : printf("...|");break;
                case 't' : printf("-|");break;
                case 'u' : printf("..-|");break;
                case 'v' : printf("...-|");break;
                case 'w' : printf(".--|");break;
                case 'x' : printf("-..-|");break;
                case 'y' : printf("-.--|");break;
                case 'z' : printf("--..|");break;
                default : printf("|:_..._:|");
        }
    }

   }
 */
