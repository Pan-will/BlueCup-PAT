/*M��A��N��B�ж���ȫ���з�ʽ*/
#include<stdio.h>
int f(int m,int n);
int main(){
	printf("%d",f(4,1));
}
int f(int m,int n){
	/*�������*/
	if(m==0 || n==0) return 1;
	/*�ݹ����*/
	return f(m-1,n) + f(m,n-1);
}
