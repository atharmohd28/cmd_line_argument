/*
 file NAme : remove_symbol.c
Author : Mohd Athar
DAte :
Purpose : Wap to   $ ./remove_symbol.c -r athaR@#!@#_34
                    o/p - athaR
*/



#include <stdio.h>

#include <string.h>

#include <stdlib.h>


char *rem_sym(char *);

int main(int argc, char *argv[])
{
    if( argc != 3)
    {
        perror("Mismatched Argument ");
        exit(1);

    }

    if (!strcmp(argv[1],"-r"))
    {
        printf("%s \n",rem_sym(argv[2]));
    }

    return 0;
}

char *rem_sym(char *str)
{
    int i;
    int j;
    i = 0;
    j = 0;

    for ( ; str[i] != '\0'; i++)
    {
        if ( ( str[i] >= 'a' && str[i] <= 'z') || ( str[i] >= 'A' && str[i] <= 'Z') )
        {
            str[j++] = str[i];
        }
    }
    str[j] = '\0';

    return str;
}

