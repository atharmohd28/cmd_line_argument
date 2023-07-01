/*File name:calculater
 * date:21/09/2022
 * Author:Mohd Athar
 * Purpose:This program is a calculater with command line argument
 */

#include<stdio.h>
#include"include/calc.h"


int main(int argc, char* argv[])
{
    char option;
    int num1;
    int num2;
    printf("Enter your option with given oprater( +, -, *, +):\n");
    scanf("%c",&option);
    printf("Enter your first number:\n");
    scanf("%d ",&num1);
    printf("Enter your second number:\n");
    scanf("%d",&num2);

    switch(argv[1][0]){

        case '+':
            for(i = 2; i < argc; i++)
                sum = add(sum + argv[i]);    
            printf("The addition of %d and %d number:%d\n",num1,num2,sum);
            break;

         case '-'
             if(argc>4)
                 printf("Takes many arguments:");
             else if(argc<4)
                for(i = 2; i<argc; i++)
                    sub=
