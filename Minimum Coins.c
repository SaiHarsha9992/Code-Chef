#include <stdio.h>
int main ( )
{
    int t ;
    scanf  ( "%d" , &t ) ;
    while ( t-- )
    {
        int x , n , a ;
        scanf ( "%d" , &x ) ;
        n = x / 10 ;
        a = n * 10 ;
        printf ( "%d\n" , x - a ) ;
    }
}