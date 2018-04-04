public class Palindrome{
	
	public static boolean isPalin(String str){

		int len = str.length();

		for(int i=0;i<=len/2;i++){
			if(str.charAt(i) != str.charAt(len-i-1))
				return false;
		}
		return true;

	}

	public static void main(String[] args){

		String txt1 = "HelloWorld";
		String txt2 = "radar";

		System.out.println(isPalin(txt1));
		System.out.println(isPalin(txt2));

	}
}