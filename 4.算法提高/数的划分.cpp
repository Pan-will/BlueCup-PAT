/*
分析：递归问题。
	step表示当前剩余的数需要分成的份数;把n分成k份，
只需第一个数等于i，计算从i等于1一直到i等于n/k,然后
把剩余的n-i分成k-1份的种类数.
	front为剩余的要划分的数的前一个数，每次i从front
开始一直到n/step结束，这样才能保证得到的划分方式是
不递减的，才能保证不会有重复的情况产生.
*/
#include<stdio.h> 
#include<string.h>
int ans=0;
void dfs(int front, int n, int step){
	if(step==1){
		ans++;
		return;
	}
	for(int i=front; i<=n/step; i++){
		dfs(i, n-i, step-1);//i一直从front开始;n-i表完成一次划分后剩下的 
	}
}
int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	/*1循环到n：代表将n划分为1到n的各个份数*/ 
//	for(int i=1;i<=n;i++){
//		dfs(1,n,i);
//	}
	/*不循环：指定了划分份数k*/ 
	dfs(1,n,k);
	printf("%d",ans);
	return 0;
}
