/*
  file name:cmd_calcS.c
  date:21/09/2022
  Author:Mohd Athar
  Purpose:This program the command line argument  perform many opration like addition,substrcation,Multiplication
  Division with the help of switch 
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main( int argc,char* argv[] )

{
    
    int i;
    int sum = 0;
    int sub = 0;
    int mul = 1;
    int div;
   
    if( argc < 2 )
        printf( "take more arguments!" );
    //else {

    else 
    {
        switch( argv[1][0] )
        {
            case '+':
                for( i = 1; i < argc; i++ )
                    sum += atoi( argv[i] );
                printf( "The addition:%d\n", sum );
                break;

            case '-':
                if( argc < 5 )
                {
                    for( i = 0; i < argc; i++ )
                        sub = atoi( argv[2] ) - atoi( argv[3] );
                            printf( "The substraction :%d\n", sub);

                       }
                    else
                    {
                        printf( "Too many arguments !" );
                        break;
                    }

            case 'x':
                for( i = 2; i < argc; i++ )
                {
                    mul = mul*atoi(argv[i]);
                printf( "The multiplication:%d\n", mul );
                break;
                }


            case '/':
                for( i = 2; i < argc; i++ )
                {
                    div = atoi( argv[2])/atoi(argv[3] );
                printf("The Division:%d\n", div);
                break;
                }

            default:
            printf("Wrong Choice: .....Plrase Enter valid Choice:\n");
        }
    }
    return 0;
}
