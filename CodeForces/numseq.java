import java.math.BigInteger;
import java.util.Scanner;
 
class numseq
{
	public static void main(String[] args)
	{
		Scanner s=new Scanner(System.in);
		int n;
		int k;
		BigInteger sum;
 
		n=s.nextInt();
		k=s.nextInt();
		sum = BigInteger.ZERO;				
			
		for(int i=1;i<=n;i++){
			sum = sum.add(fact(i).multiply(BigInteger.valueOf(i).pow(k)));
			// System.out.println(fact(i).multiply(BigInteger.valueOf(i).pow(k)));
		} 
		// System.out.println(sum);
		System.out.println(sum.mod(BigInteger.valueOf(1000000007)));
 
	}		
 
 
	public static BigInteger fact(int i)
	{
		if(i==0 || i==1)
			return (BigInteger.ONE);
		else
			return (BigInteger.valueOf(i).multiply(fact(i-1)));
	}
} 