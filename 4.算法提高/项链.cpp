#include<stdio.h> 
#include<string.h>
int sum;//�ռ�������������
char str[100];//��ʾ����
int len;//��������

int main(){
	sum=0;//������ֵΪ0 
	int i,j;
	gets(str);
	char sign;//���üǺ� 
	len = strlen(str);//�õ��������� 
	//������ 
	for(i=0;i<len;i++){
		if(str[i]=='b' || str[i]=='r'){
			sign=str[i];//��¼�������ĵ�һ���ǰ�ɫ���� 
			sum++;
			break;
		}
	}
	for(j=i;j<len;j++){
		if(str[j]==sign || str[j]=='w'){
			sum++;
		}else{
			break;
		}
	}
	//������ 
	for(i=len-1;i>=0;i--){
		if(str[i]=='b' || str[i]=='r'){
			sign=str[i];//��¼�������ĵ�һ���ǰ�ɫ���� 
			sum++;
			break;
		}
	}
	for(j=i-1;j>=0;j--){
		if(str[j]==sign || str[j]=='w'){
			sum++;
		}else{
			break;
		}
	}
	
	printf("%d",sum);
	return 0;
}
