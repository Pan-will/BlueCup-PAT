#include<stdio.h>
int f(int m,int n);
int main(){
	int m,n;
	printf("������������");
	scanf("%d",&m);
	printf("\n");
	printf("������ڼ�������");
	scanf("%d",&n);
	printf("\n");
	if(n>m){
		printf("�޽⡣");
		return 0;
	}
	if(m==1 || m==2){
		printf("1");
		return 0;
	}
	
	/*ȡ����m�еĵ�n��Ԫ��*/
	int k = f(m-1,n);
	printf("%d",k);
	
}
int f(int m,int n){
	/*�������*/
	if(m==1) return 1;
	if(m-1==n) return 1;
	return f(m-1,n)+f(m-1,n-1);//������ǵĺ���˼�� 
}

/*
1
1 1
1 2 1
1 3 3 1
*/
