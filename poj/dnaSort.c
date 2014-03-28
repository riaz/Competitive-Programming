/* DNA Sorting program*/
#include <stdio.h>

int getCount(char arr[],int len){
	int i,j,count,sum=0;
        for(i=0;i<len-1;i++){
		count = 0;
		for(j=i+1;j<len;j++){
			if(arr[i] > arr[j])count++;
		}
		sum+=count;
	}
	return sum;
}

int main(){
	int len,n,i,j;
	char arr[100][51];
	int track[100][2]; //[0] will be holding the count in ascending order
			   //[1] holds the index in the string table	
	scanf("%d%d",&len,&n);
	for(i=0;i<n;i++){
		scanf("%s",arr[i]);
		track[i][0] = getCount(arr[i],len); track[i][1] = i;
	}

	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(track[i][0]>track[j][0]){ //swapping	
				track[j][0] = track[j][0] + track[i][0];
				track[i][0] = track[j][0] - track[i][0];
				track[j][0] = track[j][0] - track[i][0];
				track[j][1] = track[j][1] + track[i][1];
				track[i][1] = track[j][1] - track[i][1];
				track[j][1] = track[j][1] - track[i][1];

			}
		}
	}

	for(i=0;i<n;i++){
		printf("%s\n",arr[track[i][1]]);
	}
	
return 0;
}
