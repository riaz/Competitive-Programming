/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
/* Not such a great solution */
class Program3
{
	
	public static boolean isPrime(long num){
		
	     long maxIter = (long)Math.sqrt(num);
	 
	     for(long i=3;i<=maxIter;i+=2){
	     	if(num%i==0) 
	     		return false;
	     }
		
	    return true;
	}
	
	public static void primeFactors(long num){
		
		boolean isEvenSet = false;
		int res;
		
		while(num%2==0){
		   if(isEvenSet){ isEvenSet = !isEvenSet; res=2;}
		   num/=2;
		}
		
		long maxIter = (long)Math.sqrt(num);
		for(long i=3;i<=maxIter;i+=2){
			if(num%i == 0 && isPrime(i))
				System.out.println(i);
		}
		
	}
	
	
	public static void main (String[] args) throws java.lang.Exception
	{
		// Largest prime factor
		
		long num = 600851475143L;
		
		primeFactors(num);
	}
}