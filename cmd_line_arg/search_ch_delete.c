/*
 file name :search_a_delete.c
Author : Mohd Athar
DAte :
Purpose : wap to search a given string and remove it from string
            $ ./serch_a_delete athar a
            o/p - thr
        
*/

#include <stdio.h>

#include <string.h>

#include <stdlib.h>

char *search(char *, char);

int main(int argc, char *argv[])
{
    if ( argc != 3)
    {
        perror("Mismatched Arguments");
        exit(1);
    }

    printf("%s\n",search(argv[1], argv[2][0]));

    return 0;
}

char *search(char *str, char ch)
{
    int j;
    for ( int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == ch)
        {
            for ( j = i; str[j] != '\0'; j++)
            {
                str[j] = str[j+1];
            }
        }

        //str[j] = '\0';

    }
    return str;
}
