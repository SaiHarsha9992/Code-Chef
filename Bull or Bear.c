#include <stdio.h>
int main ( )
{
    int t ;
    scanf ( "%d" , &t ) ;
    while ( t-- )
    {
        int a , b ;
        scanf ( "%d%d" , &a , &b ) ;
        if ( a > b )
        {
            printf ( "LOSS\n" ) ;
        }
        else if ( a < b )
        {
            printf ( "PROFIT\n") ;
        }
        else
        {
            printf ( "NEUTRAL\n" ) ;
        }
    }
}