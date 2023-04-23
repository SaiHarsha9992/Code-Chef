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
		Scanner s=new Scanner(System.in);
		int t=s.nextInt();
		while(t>0){
		    int n,k,x,y;
		    n=s.nextInt();
		    k=s.nextInt();
		    x=s.nextInt();
		    y=s.nextInt();
		    if(x>y)
		        System.out.println(k*x+(n-k)*y);
		    else
		        System.out.println(n*x);
		        t--;
		 }
	}
}
