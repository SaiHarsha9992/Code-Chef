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
        while( t-- >0){
        int n=s.nextInt();
        String j=s.next();
        for(int i=0;i<j.length();i+=2)
        {
         char a=j.charAt(i);
         char b=j.charAt(i+1);
         if(a=='0' && b=='0') System.out.print("A");
         if(a=='0' && b=='1') System.out.print("T");
         if(a=='1' && b=='0') System.out.print("C");
         if(a=='1' && b=='1') System.out.print("G");
        }
        System.out.print("\n");
	}
}
