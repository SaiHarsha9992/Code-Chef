#include <stdio.h>
int main ( )
{
    int t ;
    scanf  ( "%d" , &t ) ;
    while ( t-- )
    {
        int a , b , c , d , e , f  ;
        scanf ( "%d%d%d%d" , &a , &b , &c , &d  ) ;
        e = a + b ;
        f = c + d ;
        if ( e < f )
        {
            printf ( "%d\n" , e ) ;
        }
        else
        {
            printf ( "%d\n" , f ) ;
        }
    }
}