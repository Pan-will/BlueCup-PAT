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
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	int min1 = (a*b)/gcd2(a,b);//a��b����С������ 
	int min2 = (min1*c)/gcd2(min1,c);//a��b��c����С������ 
	printf("%d",min2);
}
