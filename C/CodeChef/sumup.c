#include<stdio.h>
#include<stdbool.h>

main(){
	int T;
	bool flag;
	int i,j;
	char num1[5],num2[5];
	char c;
	int lmax,rmax;
	scanf("%d\n",&T);
	while(T--){
		flag = true;
		lmax=rmax=i=j=0;		
		while((c=getchar())!='\n'){
		if(flag){
			if(c==' '){
				flag = false;
				continue;
		 	 }else{
		 	 	num1[i++] = c;
		 	 	lmax = (lmax<c)?c-'0':lmax;
		 	 }
		}else{
			num2[j++] = c;
		 	if(c-'0'>rmax)
		 		rmax = c-'0';	 			 	
		}
		}		

	}

	return 0;
}
