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
	    while (t-->0)
	    {
	        int a [] = new int [3];
	        for ( int i = 0 ; i < 3 ; i++ )
	        {
	             a [ i ] = s.nextInt(); 
	        }
	        Arrays.sort(a);
	        System.out.println(a[1]);
	    }
	}
}
