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
		Scanner s = new Scanner (System.in) ;
		int t = s . nextInt () ;
		while ( t-- > 0 )
		{
		    int n = s . nextInt () ;
		    int a ;
		    a = n % 3 ;
		    if ( a == 1 )
		    {
		        a = 2 ;
		    }
		    else if ( a == 2 )
		    {
		        a = 1 ;
		    }
		    else
		    {
		        a = 0 ;
		    }
		    System.out.println(a);
		   		 
		   }
		}
	}

