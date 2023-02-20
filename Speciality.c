#include <stdio.h>

int main ( )
{
	int t ;
	scanf ( "%d" , &t ) ;
	while ( t-- ) 
	{
	    int a , b , c ;
	    scanf ( "%d%d%d" , &a , &b , &c ) ;
	    if ( a >= b && a >= c ) 
	    {
	        printf ( "Setter\n" ) ;
	    }
	    else if ( b >= a && b >= c )
	    {
	        printf ( "Tester\n" ) ;
	    }
	    else
	    {
	        printf ( "Editorialist\n" ) ;
	    }
	}
	return 0;
}

