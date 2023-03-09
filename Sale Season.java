/* package codechef; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
		// your code goes here
		Scanner s = new Scanner ( System . in ) ;
		int t = s . nextInt ( ) ;
		while ( t-- > 0 ) 
		{
		    	int n = s . nextInt (  ) ;
		if ( n <= 100 ) 
		{
		    System . out . println ( n ) ;
		}
		else if ( n > 100 && n <= 1000 ) 
		{
		    System . out . println ( n - 25 ) ;
		}
		else if ( n > 1000 && n <= 5000 ) 
		{
		    System . out . println ( n - 100 ) ;
		}
		else if ( n > 5000 ) 
		{
		    System . out . println ( n - 500 ) ;
		}
		}
	
	}
}
