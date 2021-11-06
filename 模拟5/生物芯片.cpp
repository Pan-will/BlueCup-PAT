#include<stdio.h>
#include<string.h>
#include<math.h>
#define N 999999
int n,l,r;//N表光源数,L\R表区间的左边界、右边界
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
	int ans=0;//表最后亮着的光源数量 
	scanf("%d%d%d",&n,&l,&r);//录入数据 
	memset(g,0,sizeof(g));//初始光源都关闭 
	digui(2,g);
	for(int i=l;i<=r;i++){
		if(g[i-1]) ans++;
	}
	printf("%d",ans);
	return 0;
}
