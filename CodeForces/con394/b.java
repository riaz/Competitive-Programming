import java.lang.*;
import java.math.*;
import java.util.*;

public class b{

	public static void main(String[] args){
		boolean flag = false;
		BigInteger bin = BigInteger.valueOf(10);
		Scanner sc = new Scanner(System.in);
		int a = sc.nextInt();
		int b = sc.nextInt();
		for (long i=10;i<=Math.pow(10,a);i++){
			// System.out.println(bin);
			bin = bin.add(BigInteger.ONE);
			String num = bin.toString();
			int len = num.length();
			
			BigInteger lvalue = bin.multiply(BigInteger.valueOf(b));
			System.out.println(lvalue);
			BigInteger rvalue = new BigInteger(num.substring(len-1,len)).multiply(BigInteger.valueOf(10*(len+1))).add(new BigInteger(num.substring(1,len)));						
			
			// new BigInteger(num.substring(len-1,len)).multiply(BigInteger.valueOf(10*(len+1))).add(new BigInteger(num.substring(1,len)));
			 
			//System.out.println(bin.multiply(BigInteger.valueOf(b))); //1 lvalue			
			if(len>=2){
				if(lvalue == rvalue){
					System.out.println(bin);
					flag = true;
					break;					
				}
			//System.out.println((new BigInteger(num.substring(len-1,len))).multiply(BigInteger.valueOf(10*(len+1))).add(new BigInteger(num.substring(1,len))));
			}			
		}

		if(!flag)
			System.out.println("Impossible");		
	}
}