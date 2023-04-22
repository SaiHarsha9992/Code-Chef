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
			Scanner a = new Scanner(System.in);
		int t = a.nextInt();
		while(t-- > 0) {
		    int x1 = a.nextInt();
		    int y1 = a.nextInt();
		    int x2 = a.nextInt();
		    int y2 = a.nextInt();
		    x1 = Math.abs(x1);
		    y1 = Math.abs(y1);
		    x2 = Math.abs(x2);
		    y2 = Math.abs(y2);
		     double a1 = Math.sqrt(x1 * x1 + y1 * y1);
		        
		        double a2 = Math.sqrt(x2 * x2 + y2 * y2);
		        
		        if( a1 == a2 ){
		            System.out.println("EQUAL");
		        }
		        else if( a1 > a2 ){
		            System.out.println("ALEX");
		        }
		        else{
		            System.out.println("BOB");
		        }
		}
	}
}
