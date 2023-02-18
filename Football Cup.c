#include <stdio.h>
int main ( )
{
    int t ;
    scanf ( "%d" , &t ) ;
    while ( t-- )
    {
        int a , b ;
        scanf ( "%d%d" , &a , &b ) ;
        if ( a > 0 && b > 0 )
        {
            if ( a == b )
            {
                printf ( "YES\n" ) ;
            }
            else
            {
                printf ( "NO\n" ) ;
            }
        }
        else
        {
            printf ( "NO\n" ) ;
        }
    }
}