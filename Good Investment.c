#include <stdio.h>

int main( ) 
{
	int t ;
	scanf ( "%d" , &t ) ;
        while ( t-- )
        {
                int X , Y ;
                scanf ( "%d %d" , &X , &Y ) ;
                if ( X >= ( 2 * Y ) ) 
                {
                        printf ( "YES\n" ) ;
                }
                else
                {
                        printf ( "NO\n" ) ;
                }
        }
	return 0;
}

