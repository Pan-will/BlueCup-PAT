/*
�ݹ�˼·��
	������a��b��Ӧλ���ַ���ͬʱ,��ֱ�������һ��λ�ã�
						  ����ȡ��������еĽϴ���ֵ�� 
*/
#include<stdio.h>
#include<string.h>
char a[101],b[101];//�����ַ�������
int lena,lenb,lenz=0;
int maxlong(int i,int j){
	if(i>=lena || j>=lenb) return 0;//���� 
	if(a[i] == b[j]) return 1+maxlong(i+1,j+1);//ֱ�������һ��λ��
	else //ȡ��������еĽϴ���ֵ
		return maxlong(i+1,j) > maxlong(i,j+1) ? maxlong(i+1,j) : maxlong(i,j+1);
}
int main(){
	scanf("%s\n%s",&a,&b);//�����ַ���
    lena=strlen(a);//��ȡ�ַ������� 
	lenb=strlen(b);
	printf("%d",maxlong(0,0));//����Ӵ�����
	return 0; 
}          
