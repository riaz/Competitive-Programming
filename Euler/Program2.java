import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Program2
{
	public static void main (String[] args) throws java.lang.Exception
	{
		int limit = 4*1000*1000;
		
		int a = 1;
		int b = 2;
		int c;
		int res=0;
		
		while(b<limit){
		    if(b%2 ==0)
			res += b;
		    
		    c = b;
		    b += a;
		    a = c;
		   
		}
		
		System.out.println(res);
		
	}
}