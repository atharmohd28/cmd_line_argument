
/*file name:cmd_calc.c
 * date:21/09/2022
 * Author:Mohd Athar
 * Purpose:The purpose of the programm is calculate the input of the command line user perform some oprations 
 *         like addition,substractuon,Multiplication,Division.
 */



#include <stdio.h>

#include <stdlib.h>

#include <string.h>

int main( int argc,char* argv[] )
{
    int sum = 0;
    int sub = 0;
    int mul = 1;
    int div;
    int i = 0;


    if( argc < 2 )
        printf( "Nothing to calculated:\n" );


    else if( !strcmp(argv[1], "+" ))
    {
        for( int i = 2; i < argc; i++ )
            sum += atoi( argv[i] );
        printf( "The addition:%d\n", sum );
    }


    else if( !strcmp(argv[1], "-" )) {
        if( argc > 4 )
            printf( "Takes many arguments!\n" );
        else if( argc < 4 )
            printf( "Takes less arguments!\n" );
        else
        {
            for( int i = 2; i < argc; i++ )
                sub = ( atoi ( argv[2] ) - atoi( argv[3] ) );
           
        
        printf("The substraction:%d\n", sub);

    }
    }

    else if( !strcmp(argv[1], "x" ) ) 
    {
        for( int i = 2; i < argc; i++ )
        mul = mul * atoi( argv[i] );
        printf( "The multiplication:%d\n",mul );

    }

    else if( !strcmp(argv[1],"y" )) 
    {
        for( int i = 2; i < argc; i++ )
            div = atoi( argv[2]) / atoi(argv[3]);
        printf( "The division:%d\n",div );

    }


    return 0;
}
