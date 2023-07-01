#include <stdio.h>
int main( int argc, char* argv[] )
{
    printf( "total number:%d\n", argc);
    for( int i=0; i<argc; i++)
        printf("print all arguments argv[%d]:%s\n" ,i, argv[i]);
    return 0;
}
