#include <stdio.h>
int main ( )
{
    int t ;
    scanf ( "%d" , &t ) ;
    while ( t-- )
    {
        int a , b ;
        scanf ( "%d%d" , &a , &b ) ;
        if ( a + b > 6 )
        {
            printf ( "YES\n" ) ; 
        }
        else
        {
            printf ( "NO\n" ) ;
        }
    }
}