/*
	������������󹫹������еĳ��ȡ�
	�����У������ڸ�����������ȡ�ַ������,����С�ڵ��ڸ����С� 
*/
#include<stdio.h> 
#include<string.h>
int f(char a[],char b[]);
int main(){
	char a[]={'w','e','a','b','s','g'};
	char b[]={'a','b','v','d','a','p','g'};
	int k = f(a,b);
	printf("�󹫹������еĳ���Ϊ��%d",k);
}
int f(char a[],char b[]){
	
	int m = strlen(a);
	int n = strlen(b);
	/*�������*/
	if(m == 0 || n == 0){
		return 0;
	}
	
	char a1[]={0},b1[]={0};
	for(int i=1;i<m;i++){
		a1[i-1] = a[i];
	}
	for(int i=1;i<n;i++){
		b1[i-1] = b[i];
	}
	if(a[0] == b[0]){
		return f(a1,b1)+1;
	}else{
		if(f(a1,b)>f(a,b1)) return f(a1,b);
		else return f(a,b1);		
	}
}
