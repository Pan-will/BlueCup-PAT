#include<stdio.h>
int PaiDui(int m,int n){
	if(n==0) return 1;
	if(m<n) return 0;
	return PaiDui(m,n-1)+PaiDui(m-1,n);
}
int main(){
	int m,n;
	int sum;
	scanf("%d%d",&m,&n);
	sum = PaiDui(m,n);
	printf("%d",sum);
	return 0;
}
