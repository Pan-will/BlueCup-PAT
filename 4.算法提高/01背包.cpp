#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
	int w[200],v[200];
	int n,m;//�ֱ��ʾ��Ʒ�ĸ����ͱ�����װ����
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%d%d",&w[i],&v[i]);//��ʾ��Ʒ�������ͼ�ֵ
	}
	for(int i=1;i<=n;i++){
		for(int j=m;j>=v[i];j--){
			f[i][v] = cmp(f[i-1][v],f[i-1][v-c[i]+v[i]])
		}
	}
	return 0;
}
