#include<stdio.h>
#include<string.h>
int main(){
	char a[30];//����һ��������΢����Լ�����ȵ��ַ�����
	scanf("%s",a);//���ַ�������¼��
	int l=strlen(a);//ͳ���ַ����ĳ��� 
	for(int i=0;i<l;i++){
		if(a[i]>='A' && a[i]<='Z')
			a[i]+=32;
		else
			a[i]-=32;
	}
	printf("%s",a);
}
