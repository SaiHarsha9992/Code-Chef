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
		    int n =sc.nextInt();
		    if(n%2==0&&n%7==0)
		    {
		        System.out.println("Alice");
		    }
		    else if(n%2!=0&&n%9==0)
		    {
		        System.out.println("Bob");
		    }
		    else{
		        System.out.println("Charlie");
		    }
		}
	}
}
