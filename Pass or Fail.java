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
		    int n = s.nextInt();
		    int x = s.nextInt();
		    int p = s.nextInt();
		    int c = n - x;
		    int d = c*-1;
		    if ( x*3+d>=p)
		    {
		        System.out.println("PASS");
		    }
		    else{
		        System.out.println("FAIL");
		    }
		}
	}
}
