/*
��С������=�������ĳ˻� �����Լ��;
*/
#include<stdio.h> 
//�ݹ������Լ�� 
int gcd(int m,int n)  
{  
    return n==0?m:gcd(n,m%n);  
}
//����������Լ��
int gcd2(int a,int b){
	while(a!=b){
		if(a>b){
			a = a-b;
		} else {
			b = b-a;
		}
	}
	return a;//���Լ����a or b
}
int main(){
	int m,n,a;
	scanf("%d %d",&m,&n);
	a=gcd2(m,n);
//	a=gcd(m,n);
//	printf("���Լ����a or b������%d",a);
	printf("��С��������m*n/b������%d",m*n/a);
} 
