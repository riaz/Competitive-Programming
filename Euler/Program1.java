/* package whatever; // don't place package name! */

import java.util.*;
import java.lang.*;
import java.io.*;

/* Name of the class has to be "Main" only if the class is public. */
class Program1
{
	public static void main (String[] args) throws java.lang.Exception
	{

		/**
		* Hint: The numbers are in arithmetic progression
		*/

		int num = 1000;
		num = num - 1;

		// your code goes here
		int val1 = num/3;
		int val2 = num/5;
		int val3 = num/15;
		
		int res = val1*(3*(1+val1))/2 + val2*(5*(1+val2))/2 - val3*(15*(1+val3))/2;
		
		System.out.println(res);
		
	}
}