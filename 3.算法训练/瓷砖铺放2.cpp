/*
思路：
	当地板长度大于等于2时有两种瓷砖可以选择；
	否则只能选择长度为1的瓷砖。
	由此进行递归，当地板长度为0时，结束。 
*/
#include<stdio.h>
int n,sum;
int ans;
void dfs(int sum){
	if(sum==0){//出口 
		ans++;
		return;
	}
	if(sum>=2){//当地板长度大于等于2时接下来有两种选择 
		dfs(sum-1);
		dfs(sum-2);
	}else{//否则只能选用长度为1的瓷砖 
		dfs(sum-1);
	}
}
int main(){
	scanf("%d",&n);
	dfs(n);
	printf("%d",ans);
	return 0;
}
