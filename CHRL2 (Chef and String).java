/* package codechef; // don't place package name! */
 
import java.util.*;
import java.lang.*;
import java.io.*;
 
/* Name of the class has to be "Main" only if the class is public. */
class Codechef
{
	public static void main (String[] args) throws java.lang.Exception
	{
	    int i,c1=0,c2=0,c3=0,c4=0;
		Scanner sc =new Scanner(System.in);
		String s= sc.next();
		for(i=0;i<s.length();i++)
		{
		     if(s.charAt(i)=='C')
		        c1++;
		     else if(s.charAt(i)=='H')
		     {
		         if(c1>0)
		         {
		            c1--;
		            c2++;
		         }
		     }
		     else if(s.charAt(i)=='E')
		     {
		         if(c2>0)
		         {
		            c2--;
		            c3++;
		         }
		     }
		     else if(s.charAt(i)=='F')
		     {
		         if(c3>0)
		         {
		             c3--;
		             c4++;
		         }
		     }
		}
		System.out.println(c4);
	}
} 
