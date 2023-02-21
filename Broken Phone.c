#include <stdio.h>
int main ( )
{
    int t ;
    scanf ( "%d" , &t ) ;
    while ( t-- )
    {
        int a , b ;
        scanf ( "%d%d" , &a , &b ) ;
        if ( a < b )
        {
            printf ( "REPAIR\n" ) ;
        }
        else if ( a == b )
        {
            printf ( "ANY\n" ) ;
        }
        else
        {
            printf ( "NEW PHONE\n" ) ;
        }
    }
}