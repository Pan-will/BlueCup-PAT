/*
˼·��
	���ַ��������ַ�����a��,�轫ֵ����������b������b��ÿ��Ԫ
�أ���a�е�ÿ��Ԫ�رȽϣ�����ͬ��b�ж�ӦԪ����Ϊ-1��
���b�в�Ϊ-1��Ԫ�ء� 
*/ 
#include<stdio.h>
#include<string.h>
char a[100],b[100];
void Del(int index,int len){
	for(int i=0;i<len;i++){
		if(index == i) continue;//�±���ͬ��ͬһ��Ԫ�ز��Ƚϣ�������һ��ѭ�� 
		if(b[index] == a[i]) b[index]=-1;//����ͬԪ�أ���ֵΪ -1 
	}
}
int main(){
	gets(a);
	memcpy(b,a,sizeof(a));//��a��Ԫ�ؿ�����b 
	int len=strlen(a);//��a�ĳ���
	for(int i=0;i<len;i++){
		Del(i,len);
	}
	for(int i=0;i<len;i++){//���b�з�-1��Ԫ�� 
		if(b[i]!=-1){
			printf("%c",b[i]);
		}
	}
	return 0;
} 
