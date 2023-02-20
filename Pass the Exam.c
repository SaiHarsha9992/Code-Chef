#include <stdio.h>

int main ( )
{
	// your code goes here
    int t ;
    scanf ( "%d" , &t ) ;
    while ( t-- ) 
    {
      int a , b, c , d ;
      scanf ( "%d%d%d" , &a , &b , &c ) ;
      d = a + b + c ;
      if ( ( a >= 10 && b >= 10 && c >= 10 ) && ( d >= 100 ) ) 
      printf ( "PASS\n" ) ;
      else
      printf ( "FAIL\n" ) ;
       
    }
	
	return 0;
}

