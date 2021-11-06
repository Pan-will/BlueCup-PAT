/*35357670*/
#include<stdio.h>
int ans=0; 
void dfs(int n,int r,int i){
	if(n==32){
		ans++;
		return;
	}
	if(r>i){
		if(r<16){
			dfs(n+1,r+1,i);
		}
		if(i<16){
			dfs(n+1,r,i+1);
		}
	}else{
		if(r==i){
			if(r<16){
				dfs(n+1,r+1,i);
			}
		}
	}
	return;
}
int main(){
	dfs(0,0,0);
	printf("%d",ans);
	return 0;
}
