/*
	��n��Ԫ�ص�ȫ����. 
	˼·��ÿ��ȡ��һ��Ԫ�أ�������ĵݹ飻
	ע�⣺һ���ǵ� �������ݡ� 
*/
#include<stdio.h> 
#include<string.h>
void f(char a[],int k);
int main(){
	char a[] = {'A','B','C','D','E','F'};
	f(a,0);
}
/*k:��¼������ضϣ�����Ľ�����һ�εݹ����*/
void f(char a[],int k){
	/*д����*/
	if(k==strlen(a)){
		for(int i=0;i<strlen(a);i++){
			printf("%c ",a[i]);
		}
		printf("\n");
	}
	for(int i=k; i<strlen(a); i++){
		{char t = a[k];a[k] = a[i];a[i] = t;}//��̽ 
		f(a,k+1);
		{char t = a[k];a[k] = a[i];a[i] = t;}//���� 
	}
}
