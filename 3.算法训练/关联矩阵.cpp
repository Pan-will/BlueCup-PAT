/*
	在有向图的关联矩阵中，横坐标代表点，纵坐标代表边;
	如果有一个点是一条边的起点，那么矩阵中相应的值为1;
	如果为终点，那么值为-1;
	如果不关联，值为0;
*/
#include<stdio.h>
int map[1000][1000]={0};
main(){
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=0;i<m;i++){
		int a,b;
		scanf("%d%d",&a,&b);
		map[a-1][i]=1;
		map[b-1][i]=-1;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d ",map[i][j]);
		}
		printf("\n");
	}
}
