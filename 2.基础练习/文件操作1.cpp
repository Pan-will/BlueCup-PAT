#include<stdio.h> 
#include<memory.h>
/*
memset���ֽڴ洢����Ϊchar�����ʼ������

char���͵ı�����С��1���ֽ�
int ���͵ı�����С��4���ֽ� 
*/

main(){
	char *a = new char [10];
	memset(a,'p',sizeof(a));
	for(int i=0;i<10;i++){
		printf("%c ",a[i]);
	}
} 
