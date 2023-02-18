#include <stdio.h>
int main ( )
{
    int t ;
    scanf ( "%d" , &t ) ;
    while ( t-- )
    {
        int n ;
        scanf ( "%d" , &n ) ;
        if ( n > 20 )
        {
            printf ( "HOT\n" ) ;
        }
        else 
        {
            printf ( "COLD\n" ) ;
        }
    }
}