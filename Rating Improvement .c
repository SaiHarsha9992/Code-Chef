#include <stdio.h>
int main ( )
{
    int t ;
    scanf ( "%d" , &t ) ;
    while ( t-- )
    {
        int a , b ; 
        scanf ( "%d %d" , &a , &b ) ;
         if ( b <= a + 200 && b >= a )
         printf ( "\nYES" ) ;
         else
         printf ( "\nNO" ) ;
    } 
}