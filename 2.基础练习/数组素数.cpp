/*
	问题描述：输入一个数组a[N]，判断并输出每一个数组元素范围内的所有素数。 
*/ 
#include<stdio.h>
#include<math.h>
int main(){
	int N;
	scanf("%d",&N);
	int a[N];
	for(int i=0;i<N;i++){
		scanf("%d",a[i]);
	}
	printf("你的数组中的元素为：");
	for(int i=0;i<N;i++){
		printf("%d ",a[i]);
	}
	printf("0至每个元素范围内的素数为：");
	for(int i=0;i<N;i++){
		int m,k,h;
		for(m=2;m<=a[i];m++){
			k=sqrt(m+1);//只是用来确定循环次数的 
			for(int j=2;j<=k;j++)//判断素数，除数从2开始算 
				if(m%j != 0){
					printf("%d ",m);
					break;
				}
		}
	}
	
}
