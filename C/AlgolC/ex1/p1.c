#include <stdio.h>

/* Euclids algorithm to find the GCD of two numbers*/
//says that gcd of u,v is same as gcd 0f v,u-v.

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
