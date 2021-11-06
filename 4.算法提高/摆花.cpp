/*
递推法:  
	n种花摆m盆的方法数等于n-1种花摆m盆、m-1盆、m-2盆、……、m-a[n-1]盆
所有方法数的和(a[n-1]表示第n种花最多摆放的盆数).定义一个数组f[i][j]
表示i种花摆放j盆的方法数，那么有以下的关系：
	f[i][j]=f[i-1][j]+f[i-1][j-1]+…+f[i-1][j-a[i]]  (i>1)
初始:
第一种花摆放0盆：f[1][0]=1;
第一种花摆放a[i]盆：f[1][1]=1,…,f[1][a[1]]=1
*/
#include<stdio.h>
#include<string.h>
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int a[n+1];
	int f[n+1][m+1];
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);
	}
	/*设置初始值*/
	//第一种花摆放a[1]盆:1种方案 
	for(int i=1;i<=a[1];i++){
		f[1][i]=1;
	}
	//第i种摆放0盆:一种方案 
	for(int i=1;i<=n;i++){
		f[i][0] = 1;
	}
	//公式：f[i][j]=f[i-1][j]+f[i-1][j-1]+…+f[i-1][j-a[i]]  (i>1)
	for(int i=2;i<=n;i++) {//n种花 
		for(int j=1;j<=m;j++){//要摆m盆 
			for(int k=0;k<=a[i]&&k<=j;k++){//最多摆a[j] 盆 
				f[i][j] = f[i][j] + f[i-1][j-k];		
				f[i][j] = f[i][j]%1000007;
			}
		}
	}
	printf("%d",f[n][m]);
	return 0;
}
