#include<stdio.h>
#include<string.h>
#include<math.h>
#define N 999999
int n,l,r;//N���Դ��,L\R���������߽硢�ұ߽�
int g[N];
int change(int i){
	if(i==0)
		return 1;
	else
		return 0;
}
void digui(int yin,int g[]){
	if(yin>n) return;
	for(int i=1;i<=n;i++){
		if(i%yin==0){
			g[i-1]=change(g[i-1]);
		}
	}
	digui(yin+1,g);
}
int main(){
	int ans=0;//��������ŵĹ�Դ���� 
	scanf("%d%d%d",&n,&l,&r);//¼������ 
	memset(g,0,sizeof(g));//��ʼ��Դ���ر� 
	digui(2,g);
	for(int i=l;i<=r;i++){
		if(g[i-1]) ans++;
	}
	printf("%d",ans);
	return 0;
}
