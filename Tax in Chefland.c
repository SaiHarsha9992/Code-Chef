#include <stdio.h>
int main ( )
{
    int t ;
    scanf ( "%d" , &t ) ;
    while ( t-- )
    {
        int n ;
        scanf ( "%d" , &n ) ;
        if ( n > 100 )
        {
            printf ( "%d\n" , n - 10 ) ;
        }
        else
        {
            printf ( "%d\n" , n ) ;
        }
    }
}