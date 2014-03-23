import java.io.IOException;
import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Maxim
{

	public static int factors(int n)
	{
		int fact[] = new int[n];
		int j=0;
		int count=0;
		for(int i=1;i<=n;i++)
		{			
			if(n%i==0) 
			{
				if(i/10 != 0)	
				{					
					count = count + factors(i);
				}else{
					if(i==4 || i==7)
						count++;					
				}
			}			
						
		}
		return  count;
	}
	public static void main(String[] args) throws IOException
	{
				
		BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
		int T = Integer.parseInt(br.readLine());

		int arr[] = new int[T];

		for(int i=0;i<T;i++)
			arr[i] = Integer.parseInt(br.readLine());

		for(int i=0;i<T;i++)
		{
			System.out.println(factors(arr[i]));
		}

	}	
}
