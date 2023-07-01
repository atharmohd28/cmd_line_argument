/*
 file name :strcmp.c
Author : Mohd Athar
Date :
Purpose :  wap to ./strcmp capgemini learning
            o/p : 0
*/



#include <stdio.h>

#include <stdlib.h>

#include <string.h>

int str_cmp(char *, char *);

int main(int argc, char *argv[])
{
    if( argc != 3)
    {
        perror("Mismatched Argument !..");
        exit(1);
    }

    printf("%d\n",str_cmp(argv[1],argv[2]));

    return 0;
}

int str_cmp(char *str1, char *str2)
{
    while( *str1 && *str2 != '\0')
    {
        *str1++;
        *str2++;
    }
    if (*str1 == *str2)
    {
       return 0;      
    }
    else
        return (*str1- *str2);

      
} 
