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
		Scanner s = new Scanner (System.in);
		int t = s.nextInt();
		while ( t-- > 0 )
		{
		    int n = s.nextInt() ;
		    int sum = 0 ;
		    int a [] = new int [n];
		    for ( int i = 0 ; i <  n ; i++ )
		    {
		        a [ i ] = s.nextInt();
		        sum += a[ i ];
		    }
		    if ( sum % 2 == 0 )
		    {
		        System.out.println(Math.abs(sum/2));
		    }
		    else{
		        System.out.println(-1);
		    }
		}
	}
}
