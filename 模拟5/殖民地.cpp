#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	int value[m][n];//表示第i行第j列格子的价值
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&value[i][j]);
		}
	}
	/*
		sxfei[i,j]表示第i行第j列上方的围栏建立代价;
		sxfei[m+1,j]表示第i行第j列下方的围栏建立代价
	*/
	int sxfei[m+1][n];
	for(int i=0;i<m+1;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&sxfei[i][j]);
		}
	}
	/*
		zyfei[i,j]表示第i行第j列左方方的围栏建立代价;
		zyfei[i,n+1]表示第i行第j列右方的围栏建立代价
	*/
	int zyfei[m][n+1];
	for(int i=0;i<m;i++){
		for(int j=0;j<n+1;j++){
			scanf("%d",&zyfei[i][j]);
		}
	}
	return 0;
}
