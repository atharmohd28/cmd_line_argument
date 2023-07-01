/*
 File name : Count_word.c
Author : Mohd Ahtar
DAte :
Purpose :wap to   ./count_word -w abc.txt
                    o/p- 240.
 */


#include <stdio.h>

#include <stdlib.h>

#include <string.h>

int count(FILE *);

int main(int argc, char *argv[])
{
    FILE *fptr;
    if ( argc != 3)
    {
        perror("Mismatched Arguments\n");
        printf("option\n");
        printf("./count_word -w abc.txt\n");
        exit(1);
    }

    if (!(strcmp(argv[1],"-w")))
    {
        fptr = fopen(argv[2],"r");
        if(fptr ==NULL)
        {
            perror("File not opened ");
            exit(1);
        }
    
        printf("%d \n",count(fptr));

    }
    fclose(fptr);

}

int count(FILE *fptr)
{
    char ch;
    int count;
    count = 0;

    while ( (ch =fgetc(fptr)) != EOF)
    {
        if ( (ch == ' ') || (ch == '\n') || (ch == '\t'))
        {
            count++;
        }

    }
    //fclose(fptr);
    return count;
}
