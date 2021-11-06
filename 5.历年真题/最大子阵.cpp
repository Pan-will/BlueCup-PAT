/*
题目大意：求连续行、列的子矩阵的最大元素和。

	由于行、列必须是连续的，所以可以先求出每 
一列前n行的和，然后再枚举一个行的开始和结束就 
可以啦，然后再用最大字段和求出最大和。
本质是将二维的转化为一维的。
*/
#include<stdio.h>  
#include<string.h>  
int a[500][500],dp[500],b[500];
int ans;
main(){
	int n,m;
	/*输入n*m矩阵*/
	scanf("%d%d",&n,&m); 
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++)
			scanf("%d",&a[i][j]);
	}
	/*遍历所有行*/
	for(int fir=1;fir<=n;fir++){//设置fir为起始行 
		memset(b,0,sizeof(b));//给数组b赋初值为0 
		for(int i=fir;i<=n;i++){//i表示结束行，从fir行加到i行。   
			for(int j=1;j<=m;j++){
				b[j]+=a[i][j];
			}
			dp[1]=b[1];
			if(dp[1]>ans)//保证ans为最大值 
				ans=dp[1];
			for(int j=2;j<=m;j++){//最大字段和 
				if(dp[j-1]<0)
					dp[j]=b[j];
				else
					dp[j]=dp[j-1]+b[j];
				if(dp[j]>ans)
					ans=dp[j];
			}
		}
	}
	printf("%d",ans);
}
