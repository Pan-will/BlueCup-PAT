/*
	�ݹ飺��N����������ȡ��M�������ж�����ȡ��. 
*/ 
#include<stdio.h>
int f(int n,int m);
int main(){
	int N,M;
	printf("��������������"); 
	scanf("%d",&M);
	printf("\n");
	printf("������Ҫȡ��������");
	scanf("%d",&N);
	printf("\n");
	if(M==0){
		printf("�޽⡣");
		return 0;
	}
	int k = f(M,N);
	if(k==0)
		printf("�޽⡣");
	else 
		printf("����%d��ȡ����",k);
	
}
/*��n������ȡ��m����*/
int f(int n,int m){
	/*����ݹ�ĳ���*/ 
	if(m>n) return 0;//Ҫȡ���������������� 
	if(m == n) return 1;//�������� 
	if(m==0) return 1;//ȡ���� ������ȡ�� 
	return f(n-1,m-1) + f(n-1,m);
}
