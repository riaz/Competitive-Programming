//GCD function
int gcd(int u, int v){
	while(u>0){
		if(u<v){
			u = u+v;
			v = u - v;
			u = u - v;
		}
		u=u-v;
	}
	return v;
}

int convert(char num[]){
	int sum=0,i=0;					
	for(i=0;num[i]!='\0';i++){		
		sum = sum*10 + (num[i]-'0');
	}
return sum;
}

void binary 
