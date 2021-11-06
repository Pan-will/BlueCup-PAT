/*
	阶乘计算数组法 .
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	int n,i,j,r=0;
	int a[3000];
	memset(a,0,sizeof(a));//给数组赋初值0 
	a[0]=1;
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){//乘数
		for(j=0;j<3000;j++){
			int s = a[j]*i+r;
			r = s/10;
			a[j] = s%10;
		}
	}
	for(i=3000-1;i>=0;i--){
		if(a[i])//a[i]不为0时才跳出循环 
			break;
	}
	for(j=i;j>=0;j--)
		printf("%d",a[j]);
	return 0;
}

