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
		int t;
		Scanner sc= new Scanner(System.in);
		t= sc.nextInt();
		while(t-->0){
		 	int x= sc.nextInt();
		    int y= sc.nextInt();
		 	int z= sc.nextInt();
		 int l=y-x;
	     int c=z*2;
	 if(l<=c){
	    System.out.println("yes");
	 }
	 else{
	     System.out.println("No");
	 }
		 	
	}
}
    
}
