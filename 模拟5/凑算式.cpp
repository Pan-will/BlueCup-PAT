#include<stdio.h>
#include<string.h>
#include<stdlib.h>
bool use[10];
int a[10];
int ans=0;
void dfs(int begin){
	if(begin>8){
		double sum1=a[1]*1.0/a[2]*1.0;
		double sum2=(a[3]*1.0*100+a[4]*1.0*10+a[5]) / (a[6]*1.0*100+a[7]*1.0*10+a[8]);
		if(a[0]+sum1+sum2 == 10){
			ans++;
			return;
		}
	}
	for(int i=1;i<=9;i++){
		if(!use[i]){
			use[i]=true;
			a[begin] = i;
			dfs(begin+1);
			use[i] = false;
		}
	}
}
int main(){
	memset(use,false,sizeof(use));
	dfs(0);//表从第0个下标开始搜索 
	printf("%d",ans);
	return 0;
}
