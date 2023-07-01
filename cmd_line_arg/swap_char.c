/*
 file name : rep_char.c
Author : Mohd aTHar
DAte :
Purpose : wap to  $ ./swap_char  #189athar
            o/p - 1#98taahr
*/


#include <stdio.h>

#include <stdlib.h>

#include <string.h>

#define MAX 100

char *swap_char(char *);

int main(int argc, char *argv[])
{
   
    if ( argc != 2)
    {
        perror("Mismatched Argument ..!!\n");
        printf("option \n");
        printf("./swap_char athar \n");
        exit(1);
    }

    printf("%s\n",swap_char(argv[1]));
}

    //strcpy(str,argv[1]);
    
char *swap_char(char *str)
{ 
    for ( int i = 0; i < strlen(str); i++)
    {
        if ( i % 2 == 0)
        {
            char temp = str[i];
            str[i] = str[i+1];
            str[i+1] = temp;

    }
    }
    return str;
  
  }


