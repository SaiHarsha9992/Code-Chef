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
		    int a=s.nextInt();
		    int b=s.nextInt();
		    int c=s.nextInt();
		    int power=0;
		    int total=0;
		    while (a!=1)
		    {
		        a=a/2;
		        power++;
		    }
		    for(int j=0;j<power-1;j++)
		    {
		        total=total+b+c;
		    }
		    System.out.println(total+b);
		}
	}
}
