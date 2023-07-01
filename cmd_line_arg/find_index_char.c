/*
 file name : find_index_char.c
Author : Mohd Athar
DAte :
Purpose : wap to $ ./find_index_char -i 3 capgemini
            o/p - g

*/

#include <stdio.h>

#include <stdlib.h>

#include <string.h>

char find_char(int, char *);

int main( int argc, char *argv[])
{
    if ( argc != 4)
    {
        perror("Mismatched Argument ....!!!!\n");
        exit(1);
    }

    if(!(strcmp(argv[1],"-i")))
    {
        printf("%c\n",find_char(atoi(argv[2]),argv[3]));
    }

    return 0;
}

char find_char(int num, char *str)
{
    return str[num];
}
