#include <stdio.h>
int main ( )
{
    int t ;
    scanf ( "%d" , &t ) ;
    while ( t-- )
    {
        int a, b ;
        scanf ( "%d%d" , &a , &b ) ;
        if ( b < a || a == b )
        {
            printf ( "0\n" ) ;
        }
        else
        {
            printf ( "%d\n" , b - a ) ;
        }
    }
}