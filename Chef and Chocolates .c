#include <stdio.h>
int main ( )
{
    int t ;
    scanf ( "%d" , &t ) ;
    while ( t-- )
    {
        int a , b , c , d , x , y , z ;
        scanf ( "%d%d%d" , &x , &y , &z ) ;
		a = x * 5 ;
		b = y * 10 ;
		c = a + b ;
		d = c / z ;
		printf ( "%d\n" , d ) ;	
		
    }
}