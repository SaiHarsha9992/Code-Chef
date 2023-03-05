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
		Scanner r = new Scanner ( System . in ) ;
		int t = r . nextInt ( ) ;
		while ( t-- >0)
		{
		    int a = r . nextInt ( ) ;
		    int b = r . nextInt ( ) ;
		    int c = b * 3 ;
		    System . out . println ( a / c ) ;
		}
	}
}
