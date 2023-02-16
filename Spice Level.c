#include <stdio.h>
int main ( )
{
    int t ;
    scanf  ( "%d" , &t ) ;
    while ( t-- )
    {
        int n ;
        scanf ( "%d" , &n ) ;
        if ( n < 4 ) 
        {
            printf ( "MILD\n" ) ;
        }
        else if ( n >= 4 && n < 7 )
        {
            printf ( "MEDIUM\n" ) ;
        }
        else
        {
            printf ( "HOT\n" ) ;
        }
    }
}