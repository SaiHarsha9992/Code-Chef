#include <stdio.h>
int main ( )
{
    int t ;
    scanf ( "%d" , &t ) ;
    while ( t-- )
    {
        int a , b ;
        scanf ( "%d%d" , &a , &b ) ;
        if ( ( a * 100 ) >= ( b * 10 ) )
	    printf ( "Cloth\n" ) ;
	    else
	    printf ( "Disposable\n" ) ;
    }
}