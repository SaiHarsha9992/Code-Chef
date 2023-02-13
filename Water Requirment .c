#include <stdio.h>
int main ( )
{
    int t ;
    scanf ( "%d" , &t ) ;
    while ( t-- )
    {
        int n , c ;
        scanf ( "%d" , &n ) ;
        c = n * 2 ;
        printf ( "%d\n" , c ) ;
    }
}