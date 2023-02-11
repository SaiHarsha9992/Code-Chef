#include <stdio.h>
int main ( )
{
    int t ;
    scanf ( "%d" , &t ) ;
    while ( t-- )
    {
        int a , b , c ;
        scanf ( "%d%d" , &a , &b ) ;
        c = a - b ;
        if ( c < 0 )
        {
            printf ( "0\n" ) ;
        }
        else
        {
            printf ( "%d\n" , c ) ;
   
        }
    }
}