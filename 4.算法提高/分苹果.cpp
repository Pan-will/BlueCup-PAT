#include<stdio.h>
int main(){
	int n,m;
	int l,r,c;//ÿ�ε�i����ʦ�����Li������Ri����һ��Ri-Li+1��С����ÿ�˷�Ci��ƻ�� 
	scanf("%d%d",&n,&m);
	int apple[100005]={0};//��¼ÿ��С���ѵ�ƻ����
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
