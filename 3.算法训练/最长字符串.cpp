#include<stdio.h>
#include<string.h>
int main(){
	char str[5][100];
	int max=0;//��¼������±� 
	int a[5];//��¼�ַ������ȵ����� 
	for(int i=0;i<5;i++){
		scanf("%s",str[i]); 
		a[i]=strlen(str[i]);//ֻ�н�str����Ϊ��ά������� 
	}
	for(int i=0;i<5;i++){
		if(a[i]>a[max]){//Ѱ������±� 
			max = i;
		}
	}
	printf("%s",str[max]);
}
