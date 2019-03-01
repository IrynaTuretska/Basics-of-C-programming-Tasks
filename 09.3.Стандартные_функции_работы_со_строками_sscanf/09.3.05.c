/*

9.3 Стандартные функции работы со строками.
6 из 10 шагов пройдено
5 из 9 баллов  получено
Вы прошли больше 80% курса, оставьте отзыв
  

Сравнение строк
Даны две строки. Необходимо сравнить строки между собой без учёта регистра символов.

Входные данные:
Две символьных строки, записанные каждая с новой строки. Длина строк не более 50 символов.

Выходные данные:
yes если строки полностью совпадают, no в противном случае.

Sample Input:

Hello WorlD
hello world

Sample Output:

yes

*/
#include <stdio.h>
#include <string.h>


int main()
{
    char str1[50];
    char str2[50];
    int i, j, a;
    
    fgets(str1,50, stdin);
    fflush(stdin);
    fgets(str2, 50, stdin);

     while(strlen(str1) == strlen(str2)){

       for(a = 0; a < strlen(str1); ++a){


         if((str1[a] == 32 && str2[a] != 32) || (str2[a] == 32 && str1[a] != 32))
         {
           printf("no");  
              return 0;
         }
           
       }

    for(i = 0, j = 0 ; i < strlen(str1) && j < strlen(str2); ++i, ++j)
    
     {

       if(str1[i] != str2[j] && str1[i] != str2[j]+32 && str1[i] !=32)
       if(str2[i] != str1[j] && str2[i] != str1[j]+32 && str2[i] !=32)
       {
         printf("no");
            return 0;
            
      }
      continue;
      
    }
    
    printf("yes");
    return 0; 

     }

   printf("no");  
          
    return 0;
}


/*
 * better code
 *
#include <stdio.h>
#include <string.h>

int main() {
    char s[50], s1[50];
    gets(s); fflush(stdin); gets(s1);
    for (int i = 0; i < strlen(s); i++) {
        s[i] += s[i] < 'a' ? 32 : 0;
    }
    for (int i = 0; i < strlen(s1); i++) {
        s1[i] += s1[i] < 'a' ? 32 : 0;
    }
    printf(strcmp(s, s1) ? "no" : "yes");
}
*/
