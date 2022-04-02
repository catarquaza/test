#include <stdio.h>

int add( int a, int b )
{
    int sum = a + b;
    return sum;
}

int main( void )
{
    char s[20];

    int x = 4;
    x = add( 5, 13 );
    printf( "hello ira = %d\n", x );

    gets(s);
    printf(s);

    return 0;
}