#include <stdio.h>

int main()
{
    int t ;
    scanf ( "%d\n" , &t ) ;
    while ( t-- ) 
    {
        int x , y , a , b ;
        scanf ( "%d %d\n" , &x , &y ) ;
        a = 3 * x ;
        b = 2 * y ;
        if ( a > b ) 
        printf ( "%d\n" , b ) ;
        else
        printf ( "%d\n" , a ) ;
    }
	return 0;
}