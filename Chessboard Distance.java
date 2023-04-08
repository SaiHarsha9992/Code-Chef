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
		    int x1 = s.nextInt();
		    int y1 = s.nextInt();
		    int x2 = s.nextInt();
		    int y2 = s.nextInt();
		    int val1 = Math.abs(x1-x2);
		    int val2 = Math.abs(y1-y2);
		    int ans = Math.max(val1,val2);
		   System.out.println(ans);
		}
	}
}
