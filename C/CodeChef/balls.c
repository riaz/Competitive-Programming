#include<stdio.h>
/*BALLS*/
main(){
	int N,i;
	int arr[100000][2];
	// int min[2];
	int n1,n2,temp;
	int ti,bi;  //t1:topIndex b1:bottomIndex
	int tmax,bmax;

	scanf("%d",&N);
	temp = N;
	//Initializing each to zero
	for(i=0;i<100000;i++)
		arr[i][0] = arr[i][1] = 0;

	tmax=0; //This the highest frequency counter
	bmax=0;
	// min[0]=0;
	// min[1]=0;
	while(N--) {
		scanf("%d%d",&n1,&n2);
		// if(n1!=n2){
			// tmax = (tmax<++arr[n1][0])?arr[n1][0] :tmax;				
			// bmax = (bmax<++arr[n2][1])?arr[n2][1] :bmax;						
			if(tmax<++arr[n1][0]){
				tmax = arr[n1][0];
				ti = n1;
			}
			if(bmax<++arr[n2][1]){
				bmax = arr[n2][1];
				bi = n2;
			}	
		// }else{
		// 	// tmax = (tmax<++arr[n1][0])?arr[n1][0] && (ti = n1):tmax;				
		// 	// bmax = (bmax<++arr[n2][1])?arr[n2][1] && (bi = n2):bmax;							
		// }
	}
	temp = (temp%2==0)?temp/2:(temp+1)/2;	
	// printf("%d%d",tmax,temp);
	if(tmax >= temp)
		printf("0\n");
	else if(tmax + arr[ti][1] >= temp || bmax + arr[bi][0] >= temp){
		printf("%d\n",((tmax - temp)>bmax)?tmax-temp:bmax);		
	}
	// else if(min[0] > min[1] && bmax + arr[bi][0] > temp){
	// 	// printf("%d",bmax);
	// 	min[1] = bmax;
	// }
	// else if(bmax > temp)
	// 	printf("%d",bmax);
	else
		printf("Impossible");	
	return 0;
}
