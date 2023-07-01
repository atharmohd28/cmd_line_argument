/*
 file name : lit_big.c
Author : Mohd athar
DAte :
Purpose : wap to using function   $ ./lit_big -b 0x12345678
                                    convert - 0x78563412
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned int con(unsigned int);

int main(int argc, char *argv[])
{
    if ( argc != 3)
    {
        perror("Mismatched Argument\n");
        exit(1);
    }
    if ( !(strcmp(argv[1],"-b")))
    {
        unsigned int n = strtol(argv[2], NULL, 16);
        //printf("Convert %x\n", con(atoi(argv[2])));
        printf("Convert %x\n", con(n));
    }
    return 0;
}
unsigned int con(unsigned int num)
{
    unsigned int res = 0;
    res = ( (num << 24) | ( ( 0x0000ff00 & num ) << 8) | ( ( 0x00ff0000 & num ) >> 8) | (num >> 24));
    return res;
}
