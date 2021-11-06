#include<stdio.h>
int main(){
	long int sum;
	int n;
	scanf("%d",&n);
	sum = (1+n)*n/2;//求和公式 
	printf("%I64d",sum);
}
