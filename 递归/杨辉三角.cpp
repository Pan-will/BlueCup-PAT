#include<stdio.h>
int f(int m,int n);
int main(){
	int m,n;
	printf("请输入行数：");
	scanf("%d",&m);
	printf("\n");
	printf("请输入第几个数：");
	scanf("%d",&n);
	printf("\n");
	if(n>m){
		printf("无解。");
		return 0;
	}
	if(m==1 || m==2){
		printf("1");
		return 0;
	}
	
	/*取出第m行的第n个元素*/
	int k = f(m-1,n);
	printf("%d",k);
	
}
int f(int m,int n){
	/*定义出口*/
	if(m==1) return 1;
	if(m-1==n) return 1;
	return f(m-1,n)+f(m-1,n-1);//杨辉三角的核心思想 
}

/*
1
1 1
1 2 1
1 3 3 1
*/
