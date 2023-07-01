/*
 file name : Em_date.c
Author : Mohd Athar
DAte :
Purpose : wap to ./Em_date  42268954 mirza file.txt
                o/p - store in file - 42268954  mirza
                                      42278954  athar
                                      42278937  akhil
*/

#include <stdio.h>

#include <stdlib.h>

#include <string.h>


struct Em_data
{
    int em_id;
    char *em_name;

}Employee;

void record(FILE *);

int main(int argc , char *argv[])
{
    FILE *fptr;

    if (argc != 4)
    {
        perror("Mismatched Argument ...\n");
        printf(" option \n");
        printf("./Em_data  42268954 mirza file.txt\n");
        exit(1);
    }




    fptr = fopen(argv[3],"a+");
    if ( fptr == NULL)
    {
        perror("file is not opened ");
        exit(1);
    }

    //Employee.em_id = atoi(argv[1]);
    Employee.em_id = atoi(argv[1]);

    Employee.em_name = argv[2];


    record(fptr);

    fclose(fptr);

}

void record(FILE *fptr)
{

    fprintf(fptr,"%d\t %s\n",Employee.em_id,Employee.em_name);

}
