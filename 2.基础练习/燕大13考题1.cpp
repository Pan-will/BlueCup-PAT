/*
strcmp���ַ����ȽϺ������Ƚϸ�λ�ַ���ascii�룬ȡֵ-1��0��1�� 
strcat���ַ���ƴ�Ӻ����� 
strlen�����ַ������Ⱥ����� 
*/
#include<stdio.h> 
#include<string.h>
int main(){
	char s1[20] = "china",s2[20] = "for",s[10];
	if(strcmp(s1,s2))
		printf("%s  %d\n",strcat(s2,s1),strcmp(s2,s1));
	else
		printf("%d\n",strlen(s1));
	return 0;
}
