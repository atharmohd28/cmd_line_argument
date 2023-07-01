/*
 file name : str_replace.c
Author : Mohd Athar
Date :
Purpose : wap to $ ./str_replace -r globalEdge capgemini abc.txt

*/


#include <stdio.h>

#include <string.h>

#include <stdlib.h>

#define MAX 100


char *replace( FILE*,char*,char*,char*);

int main(int argc, char *argv[])
{
    if ( argc != 5)
    {
        perror("Mismatched Argument ..!!\n");
        printf("option\n");
        printf("./str_replace -r globaledge capgemini abc.txt\n");
        exit(0);
    }

    FILE *fptr;

    fptr = fopen(argv[4],"r+");
    if( fptr == NULL)
    {
        perror("File is not opened !!..");
        exit(1);
    }
    char str[MAX];

    if (  ! (strcmp(argv[1], "-r")))
    {
        fprintf(fptr, "%s", replace(fptr,str,argv[2],argv[3]));
    }

    fclose(fptr);

}
char *replace(FILE *fptr,char *str,char *str1,char *str2)
{
    //char *str;
    //while( ( fscanf(fptr, "%s", str) != EOF))
    while( ( fgets(str,MAX, fptr) != NULL))
    {
        if (strstr(str,str1) != NULL)
        {
            strcpy(str2,str1);
        }

    }
    fputs(str2,fptr);
}
