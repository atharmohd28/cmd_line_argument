/*
file name : add_num.c
Author : Mohd AThar
DAte :
Purpose :  wap to $ ./add_num.c 23 17
		o/p - 40
*/


#include <stdio.h>

#include <string.h>

#include <stdlib.h>

int sum(int , int);

int main(int argc, char *argv[])
{
    if ( argc != 3)
    {
        perror("Mismatched Arguments :\n");
        exit(1);
    }

    printf("%d\n",sum(atoi(argv[1]),atoi(argv[2])));
}

int sum(int n1, int n2)
{
    return n1+n2;
}

