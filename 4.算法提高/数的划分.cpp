/*
�������ݹ����⡣
	step��ʾ��ǰʣ�������Ҫ�ֳɵķ���;��n�ֳ�k�ݣ�
ֻ���һ��������i�������i����1һֱ��i����n/k,Ȼ��
��ʣ���n-i�ֳ�k-1�ݵ�������.
	frontΪʣ���Ҫ���ֵ�����ǰһ������ÿ��i��front
��ʼһֱ��n/step�������������ܱ�֤�õ��Ļ��ַ�ʽ��
���ݼ��ģ����ܱ�֤�������ظ����������.
*/
#include<stdio.h> 
#include<string.h>
int ans=0;
void dfs(int front, int n, int step){
	if(step==1){
		ans++;
		return;
	}
	for(int i=front; i<=n/step; i++){
		dfs(i, n-i, step-1);//iһֱ��front��ʼ;n-i�����һ�λ��ֺ�ʣ�µ� 
	}
}
int main(){
	int n,k;
	scanf("%d%d",&n,&k);
	/*1ѭ����n������n����Ϊ1��n�ĸ�������*/ 
//	for(int i=1;i<=n;i++){
//		dfs(1,n,i);
//	}
	/*��ѭ����ָ���˻��ַ���k*/ 
	dfs(1,n,k);
	printf("%d",ans);
	return 0;
}
