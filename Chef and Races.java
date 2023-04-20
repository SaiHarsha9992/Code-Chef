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
		    int a,b,c,d,count=2;
		    a = s.nextInt();
		    b = s.nextInt();
		    c = s.nextInt();
		    d = s.nextInt();
		    if(a==c || a==d){
		        count--;
		    }
		    if(b==c || b==d){
		        count--;
		    }
		    System.out.println(count);
		}
	}
}
