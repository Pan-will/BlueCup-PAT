/*
思路：
	当地板长度大于等于2时有两种瓷砖可以选择；
	否则只能选择长度为1的瓷砖。
	由此进行递归，当地板长度为0时，结束。 
*/
#include<stdio.h>
int n,sum,ans;
void dfs(int sum){
	if(sum==0){
		ans++;
		return;
	}
	if(sum>=2){
		dfs(sum-1);
		dfs(sum-2);
	}else{
		dfs(sum-1);
	}
}
int main(){
	scanf("%d",&n);
	dfs(n);
	printf("%d",ans);
	return 0;
}
