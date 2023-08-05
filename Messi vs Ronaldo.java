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
		int m1 = sc.nextInt();
		int m2 = sc.nextInt();
		int r1 = sc.nextInt();
		int r2 = sc.nextInt();
		if((m1*2)+m2>(r1*2)+r2){
		    System.out.println("Messi");
		}
		else if((m1*2)+m2==(r1*2)+r2){
		    System.out.println("Equal");
		}
		else {
		    System.out.println("Ronaldo");
		}
	}
}
