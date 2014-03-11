#include <iostream>
int main() {
    int A,N,K; scanf("%d %d %d",&A,&N,&K);
    for (int i=0; i<K; i++) {
        printf("%d ",A%(N+1));
        A/=N+1;
    }
}