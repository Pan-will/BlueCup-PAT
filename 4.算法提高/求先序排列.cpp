/*
DEABFCHG
DEAFHGCB
*/
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char pre[10],in[10],last[10];//数组规模比预算稍微设置大一点 
void dfs(int instart,int inend,int lastroot,int preindex){
	if(instart>inend) return;//出口 
	for(int i=instart;i<=inend;i++){
		if(in[i] == last[lastroot]){
			pre[preindex] = in[i];
			dfs(instart,i-1,lastroot-(inend-i)-1,preindex+1);//左子树
			dfs(i+1,inend,lastroot-1,preindex+(i-instart)+1);//右子树
			return; 
		}
	}
}
int main(){
	scanf("%s",&in);//录入中序,后序 
	getchar();//处理回车 
	scanf("%s",&last);
	int leni = strlen(in);
	int lenl = strlen(last);
	dfs(0,leni-1,lenl-1,0);
	printf("%s",pre);
	return 0;
}
