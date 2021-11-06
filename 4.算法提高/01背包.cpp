#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
	int w[200],v[200];
	int n,m;//分别表示物品的个数和背包能装重量
	scanf("%d%d",&n,&m);
	for(int i=0;i<n;i++){
		scanf("%d%d",&w[i],&v[i]);//表示物品的重量和价值
	}
	for(int i=1;i<=n;i++){
		for(int j=m;j>=v[i];j--){
			f[i][v] = cmp(f[i-1][v],f[i-1][v-c[i]+v[i]])
		}
	}
	return 0;
}
