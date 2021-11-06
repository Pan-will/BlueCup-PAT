/*
	递归：在N个球中任意取出M个，求有多少种取法. 
*/ 
#include<stdio.h>
int f(int n,int m);
int main(){
	int N,M;
	printf("请输入总球数："); 
	scanf("%d",&M);
	printf("\n");
	printf("请输入要取出球数：");
	scanf("%d",&N);
	printf("\n");
	if(M==0){
		printf("无解。");
		return 0;
	}
	int k = f(M,N);
	if(k==0)
		printf("无解。");
	else 
		printf("共有%d种取法。",k);
	
}
/*从n个球中取出m个来*/
int f(int n,int m){
	/*构造递归的出口*/ 
	if(m>n) return 0;//要取出的数量大于总量 
	if(m == n) return 1;//等于总量 
	if(m==0) return 1;//取够了 不用再取了 
	return f(n-1,m-1) + f(n-1,m);
}
