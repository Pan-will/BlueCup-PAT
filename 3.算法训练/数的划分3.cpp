#include<stdio.h>
int f(int n,int a[]){
	if(n==0){
		return 1;
	}
	if(n==1)
		return 1;
	int sum = 0;
	for(int i=1;i<=n;i++){
		if(n-i>=i){
			sum+=f(n-i,a);
		}
		if(n==i){
			sum++;
		}
	}
	return sum;
}
int main(){
	int n;
	int a[1000];
	scanf("%d",&n);
	printf("%d",f(n,a));
}
