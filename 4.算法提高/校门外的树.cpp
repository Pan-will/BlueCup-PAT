/*
ע�⣺����L������L+1������
˼·��
	������a[L+1],����ֵΪ1 ��
	����һ�����䶼��a�������ڵ�Ԫ����ֵ0��
	ͳ��a�з�0Ԫ�ظ������𰸡� 
*/
#include<stdio.h>
int main(){
	int L,M;
	int ans=0;//�����ʣ�µ��� 
	scanf("%d%d",&L,&M);
	int tree[L+1];//����L����L+1����
	for(int i=0;i<L+1;i++){
		tree[i]=1;
	}
	for(int i=0;i<M;i++){
		int a,b;//��ʾÿ�������յ�
		scanf("%d %d",&a,&b);
		for(int j=a;j<=b;j++){
			tree[j] = 0;
		}
	}
	for(int i=0;i<L+1;i++){
		if(tree[i]){
			ans++;
		}
	}
	printf("%d",ans);
	return 0;
}
