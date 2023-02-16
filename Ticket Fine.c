#include <stdio.h>
int main ( )
{
    int t ;
    scanf ( "%d" , &t ) ;
    while ( t-- )
    {
        int a , b , c , e , f ;
        scanf ( "%d%d%d" , &a , &b , &c ) ;
        e = b - c ;
        printf ( "%d\n" , e * a ) ;
    }
}