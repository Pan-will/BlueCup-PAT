/*
	������ͼ�Ĺ��������У����������㣬����������;
	�����һ������һ���ߵ���㣬��ô��������Ӧ��ֵΪ1;
	���Ϊ�յ㣬��ôֵΪ-1;
	�����������ֵΪ0;
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
