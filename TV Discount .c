#include <stdio.h>
int main ( )
{
    int t ;
    scanf ( "%d" , &t ) ;
    while ( t-- )
    {
        int a , b , c , d ;
        scanf ( "%d%d%d%d" , &a , &b , &c , &d ) ;
        if ( a - c < b - d )
        {
            printf ( "First\n" ) ;
        }
        else if ( a - c == b - d  )
        {
            printf ( "Any\n" ) ;
        }
        else
        {
            printf ( "Second\n" ) ;
        }
    }
}