#include<stdio.h>
int main(){
	int n,m;
	int l,r,c;//每次第i个老师会给第Li个到第Ri个，一共Ri-Li+1个小朋友每人发Ci个苹果 
	scanf("%d%d",&n,&m);
	int apple[100005]={0};//记录每个小朋友的苹果数
	for(int j=1;j<=m;j++){
		scanf("%d%d%d",&l,&r,&c);
		for(int i=l;i<=r;i++){
			apple[i]+=c;
		}
	}
	for(int i=1;i<=n;i++){
		printf("%d ",apple[i]);
	}
	return 0;
}
