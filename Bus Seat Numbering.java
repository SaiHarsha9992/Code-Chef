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
		    int n = sc.nextInt();
		    if(n>=1&&n<=10)
		    {
		        System.out.println("Lower Double");
		    }
		    else if(n>=11&&n<=15)
		    {
		        System.out.println("Lower Single");
		    }
		    else if(n>=16&&n<=25)
		    {
		        System.out.println("Upper Double");
		    }
		    else
		    {
		        System.out.println("Upper Single");
		    }
		}
	}
}
