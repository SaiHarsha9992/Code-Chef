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
		Scanner sc = new Scanner (System.in);
		int t = sc.nextInt();
		while(t-- > 0)
		{
		    int p , q ,  r , s;
		    p = sc.nextInt();
		    q = sc.nextInt();
		    r = sc.nextInt();
		    s = sc.nextInt();
		    if(p>q+r+s)
		    System.out.println("Yes");
		    else if(q>p+r+s)
		    System.out.println("Yes");
		    else if(r>p+q+s)
		    System.out.println("Yes");
		    else if(s>p+q+r)
		    System.out.println("Yes");
		    else
		    System.out.println("No");
		    
		}
	}
}
