#include <stdio.h>
int main ( )
{
    int t ;
    scanf ( "%d" , &t ) ;
    while ( t-- )
    {
        int a , b , c , d , e , f ;
        scanf ( "%d%d%d" , &a , &b , &c ) ;
        d = 4 * a ;
        e = 2 * b ;
        f = 0 * c ;
        printf ( "%d\n" , d + e + f ) ;
    }
}