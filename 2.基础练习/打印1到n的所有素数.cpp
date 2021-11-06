/*
	问题描述：输入一个数N，判断并输出 0-N范围内的所有素数。 
*/ 
#include<stdio.h>
#include<math.h>
int main(){
	int N;
	scanf("%d",&N);
	int leap=1;//定义一个标记，初值为1 
	int m,k,h;
	for(m=2;m<=N;m++){
		k=sqrt(m+1);//确定循环次数
		for(int i=2;i<=k;i++)//判断素数，除数从2开始算 
			if(m%i == 0){//能整除则非素数，标记改变 
				leap=0;
				break;
			}
		if(leap==1){ //可以省略写为：if(leap);若标记没变，则打印该数 
			printf("%d ",m);
			h++;//记录输出个数 
			if(h%10 == 0)//一行输出10个数
				printf("\n"); 
		}
		leap = 1;//重置标记 
	}
}
