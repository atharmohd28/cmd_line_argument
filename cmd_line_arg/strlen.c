/* 
 file name : strlen.c
Author : Mohd aThar
Date :
purpose :  wap to  ./strlen capgemini
            o/p- 9
*/


#include <stdio.h>

#include <string.h>

#include <stdlib.h>

int str_len(char *);

int main(int argc, char *argv[])
{
    if ( argc != 2)
    {
        perror("Mismatched Argument ..");
        exit(1);
    }

    printf("%d\n",str_len(argv[1]));

    return 0;

}


int str_len(char *str)
{
    int count;
    count = 0;
    while( *str++ != '\0')
    {
        count++;
    }
    return count;

}
