#include <stdio.h>

int main ( )
{
	int t ;
	scanf ( "%d" , &t ) ;
	while ( t-- ) 
	{
	    int x , y , z ;
	    scanf ( "%d%d" , &x , &y ) ;
	    z = ( y - x ) ;
	    if ( x < y )
	    {
	        printf ( "%d\n" , x + ( z * 2 ) ) ;
	    }
	    else
	    printf ( "%d\n" , y ) ;
	}
	return 0;
}

