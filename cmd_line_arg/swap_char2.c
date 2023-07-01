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


int main(int argc, char *argv[])
{
    if ( argc != 2)
    {
        perror("Mismatched Argument ..!!\n");
        printf("option \n");
        printf("./swap_char athar \n");
        exit(1);
    }
    
    
    for ( int i = 0; i < strlen(argv[1]); i++)
    {
        if ( i % 2 == 0)
        {
            char temp = argv[1][i];
            argv[1][i] = argv[1][i+1];
            argv[1][i+1] = temp;

    }
    }
    printf("%s\n", argv[1]);
    return 0;
  }


