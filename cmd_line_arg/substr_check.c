/*
 file name : substr_check.c
Auhtor : Mohd Athar
Date :
Purpose: wap to check sub string is belong to string or not
*/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void substr(char *, char *);

int main (int argc, char *argv[])
{
    if (argc != 3)
    {
        perror("Mismatched Arguments :\n");
        exit(1);
    }

    substr( argv[1], argv[2] );

    return 0;

}

void substr(char *str1, char *str2)
{
    int i;
    i = 0;
    int j;
    j = 0;
    int flag;
    flag = 0;

    while ( str1[i] != '\0')
    {
        
        if (str1[i] == str2[j])
        {
            while( str2[j] != '\0')
            {
               
                if(str1[i] == str2[j])
                {
                    i++;
                    j++;
                    flag++;
                }
                else
                {
                    flag = 0;
                    break;
                }

                
            }
        }
        i++;
    }
    if (flag != 0)
        printf("substring is present \n");
    else
        printf("substring is not present \n");
}



