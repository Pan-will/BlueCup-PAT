#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	int value[m][n];//��ʾ��i�е�j�и��ӵļ�ֵ
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&value[i][j]);
		}
	}
	/*
		sxfei[i,j]��ʾ��i�е�j���Ϸ���Χ����������;
		sxfei[m+1,j]��ʾ��i�е�j���·���Χ����������
	*/
	int sxfei[m+1][n];
	for(int i=0;i<m+1;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&sxfei[i][j]);
		}
	}
	/*
		zyfei[i,j]��ʾ��i�е�j���󷽷���Χ����������;
		zyfei[i,n+1]��ʾ��i�е�j���ҷ���Χ����������
	*/
	int zyfei[m][n+1];
	for(int i=0;i<m;i++){
		for(int j=0;j<n+1;j++){
			scanf("%d",&zyfei[i][j]);
		}
	}
	return 0;
}
