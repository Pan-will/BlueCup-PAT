#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int ans;
int sum;
bool use[15];
int a[15],b[15];
void dfs(int begin,int sum){
	if(begin==8) {
		for(int i=0;i<7;i++){
			printf("%d",a[i]);
		}
	}
	for(int i=begin;i<=7;i++){
		if(!use[i]){
			use[i] = true;
			a[begin] = i;
			dfs(begin+1,sum-1);
			use[i] = false;
		}
	}
}
int main(){
	memset(use,false,sizeof(use));
	dfs(0,7);
	return 0;
}
