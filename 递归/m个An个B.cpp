/*M个A，N个B有多少全排列方式*/
#include<stdio.h>
int f(int m,int n);
int main(){
	printf("%d",f(4,1));
}
int f(int m,int n){
	/*定义出口*/
	if(m==0 || n==0) return 1;
	/*递归核心*/
	return f(m-1,n) + f(m,n-1);
}
