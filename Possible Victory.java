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
		Scanner sc = new Scanner(System.in);
	    int r = sc.nextInt();
	    int o = sc.nextInt();
	    int c = sc.nextInt();
	    if(c + (20-o)*36>r){
	        System.out.println("YES");
	    }
	    else{
	        System.out.println("NO");
	    }
	}
}
