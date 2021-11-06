#include<stdio.h> 
int getSum(int n,int a){
	if(n==1) return a;
	return 10*getSum(n-1,a) + a;
}
main(){
	int n,a;
	scanf("%d %d",&n,&a);
	printf("%d",getSum(n,a));
}
