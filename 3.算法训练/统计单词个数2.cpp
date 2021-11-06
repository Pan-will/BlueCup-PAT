#include<stdio.h>
#include<string.h> 
#include<stdlib.h>
#define MAX 999999
int ans=0,n;
char str[MAX];
void dfs(char dt){
	for(int i=0;i<strlen(str);i++){
		if(dt==str[i]){
			ans++;
		}
	}
}
int main(){
	int n,k;
//	scanf("%d%d",&n,&k);
	scanf("%s",str);
	int s;
	scanf("%d",&s);
	for(int i=0;i<s;i++){
		char dt;
		scanf("%c",dt);
		dfs(dt);
	}
	printf("%d",ans);
	return 0;
}
