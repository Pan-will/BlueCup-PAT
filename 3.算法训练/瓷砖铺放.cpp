/*
˼·��
	���ذ峤�ȴ��ڵ���2ʱ�����ִ�ש����ѡ��
	����ֻ��ѡ�񳤶�Ϊ1�Ĵ�ש��
	�ɴ˽��еݹ飬���ذ峤��Ϊ0ʱ�������� 
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
