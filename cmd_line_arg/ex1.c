
#include <stdio.h>

int main(int argc,char* argv[])
{
    int i;
    //printf("programm name is:%s\n",argv[0]);
    if( argc >= 1) 
    {
        printf( "arguments passed:%d\n", argc );
    for( i=1; i<argc; i++ )
        printf( "argv[%d]: %s\n ", i, argv[i]);
    }
    return 0;
}
