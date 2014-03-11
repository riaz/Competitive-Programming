import java.util.*;

public class BettingMoney{
	public static int moneyMade(int[] betAmount,int[] prem,int mainResult){
		int sum=0;
		for(int i=0;i<betAmount.length;i++){
			if (i==mainResult) {
					sum -= (prem[i]*betAmount[i])/100;
			}
			else{
				sum += betAmount[i];				
			}				
		}

		return sum*100;
	}

	public static void main(String[] args){
		int a[] = {100};
		int b[] = {10};
		int c   = 0;

		System.out.println(moneyMade(a,b,c));
	}
}