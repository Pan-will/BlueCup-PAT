#include<stdio.h> 
int is_prime(int n){//判断是否为质数：是返回1，否则返回0 
	for(int i=2;i<n;i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int n;
	scanf("%d",&n);
	for(int i=2;i<n;i++){
		if(n%i==0 && is_prime(i)==1)//必须是质数，但也必须是因数 
			printf("%d ",i);
	}
	return 0;
}
