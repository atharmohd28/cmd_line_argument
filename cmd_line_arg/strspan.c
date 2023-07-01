/*
 file name : strspan.c
Author : Mohd Athar
DAte :
purpose :   wap to   ./strspan globalEadge learning
                        o/p - 2

*/

#include <stdio.h>
#include <stdlib.h>

int strspan(char *, char *);

int main(int argc, char * argv[])
{
    if ( argc != 3)
    {
        perror("mistmatched Arguments ...!!!");
        exit(1);
    }

    printf("%d\n",strspan(argv[1],argv[2]));

    return 0;

}

int strspan(char *str1,char *str2)
{
    int i;
    int j;
    int count;
    count = 0;

    for( i = 0; str1[i] != '\0'; i++)
    {
        int flag = 0;
        for ( j = 0; str2[j] != '\0';j++)
        {
            if ( str1[i] == str2[j])
            {
                    
                flag =1;
                break;
           }
        }
        if(flag == 0)
            break;
        else 
            count ++;
        
    }
    return count;
}

