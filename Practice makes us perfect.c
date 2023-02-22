#include <stdio.h>
int main ( )
{
    int a [ 4 ] , c = 0 ;
    for ( int i = 0 ; i < 4 ; i++ )
    {
        scanf ( "%d" , &a [ i ] ) ;
        if ( a [ i ] >= 10 )
        {
            c += 1 ;
        }
    }
    printf ( "%d\n" , c ) ;
    
}