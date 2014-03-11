import java.lang.*;
import java.io.*;

public class BinaryCode{
	public static boolean term = false;
	public static String encode(String code)
	{
		char[] str = code.toCharArray();
		char[] ptr = new char[str.length];
		for(int i=0;i<str.length;i++){
			if(i-1 >= 0 && i+1 < str.length)
				ptr[i] = (char)((int)(str[i-1]) + (int)(str[i+1]) + (int)(str[i]) - 2*48);
			else if(i-1< 0 &&  i+1 < str.length){
				ptr[i] = (char)((int)(str[i+1]) + (int)(str[i]) - 48);
			}
			else if(i-1>=0 &&  i+1 >= str.length){
				ptr[i] = (char)((int)(str[i-1]) + (int)(str[i]) - 48);
			}
			else if(i==0 &&  i == str.length-1){
				ptr[i] = str[i];
			}		
		}		
		return new String(ptr);
	}

	public static String[] decode(String code)
	{
		int i;
		char[] str = code.toCharArray();
		char[] ptr = new char[str.length];
		String[] res = new String[2];
		//Assuming ptr[0] as 0		
		
		for(i=0;i<ptr.length;i++){
			if(i==0){
				ptr[i] = '0';		
			}
			else if(i-2 <= 0  && i <= ptr.length-1){
				ptr[i] = (char)((int)str[0]  - (int)ptr[0] + 48);
			}else if(i-2 > 0  && i-2 >= ptr.length){
				ptr[i] = (char)((int)str[i-1] - (int)ptr[i-1] + 48);
				// System.out.println("dfsdfds");
			}else if(i-2 > 0  && i-2 < ptr.length){			
				ptr[i] = (char)((int)str[i-1] - (int)ptr[i-1] - (int)ptr[i-2] + 2*48);	
			}
			// System.out.println(ptr[i]);
			// if((int)(ptr[i]-48) > 1){				
			//  	System.out.println("Term 1" + ptr[i]);
			//  	term = true;
			//  	break;
			// }
		}

			if(term){
				res[0] = "NONE";
			}else{
				res[0] = new String(ptr);			
			}
			term = false;
		
		//Assuming ptr[0] as 1		
		
		for(i=0;i<ptr.length;i++){
			if(i==0){
				ptr[i] = '1';		
			}
			else if(i-2 <= 0  && i <= ptr.length-1){
				ptr[i] = (char)((int)str[0]  - (int)ptr[0] + 48);
			}else if(i-2 > 0  && i-2 >= ptr.length){
				ptr[i] = (char)((int)str[i-1] - (int)ptr[i-1] + 48);
				// System.out.println("dfsdfds");
			}else if(i-2 > 0  && i-2 < ptr.length){			
				ptr[i] = (char)((int)str[i-1] - (int)ptr[i-1] - (int)ptr[i-2] + 2*48);	
			}
			// if((int)ptr[i] > 1){				
			// 	term = true;
			// 	break;
			// }
			System.out.println(ptr[i]);
		}		
		if(term){
			res[1] = "NONE";
		}else{
			res[1] = new String(ptr);			
		}
				

		return res;
	}
	public static void main(String[] args) throws IOException{
		BufferedReader br = new BufferedReader(new InputStreamReader
			(System.in));

		String code = br.readLine();
		// System.out.println(encode(code));
		String[] res = decode(code);
		for(int i=0;i< res.length;i++){			
			System.out.println(res[i]);		
		}
	}
}