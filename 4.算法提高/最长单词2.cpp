#include<stdio.h>
#include<string.h>
#define max 100000
int is_zimu(char ch){//�ж��ַ�ch�Ƿ�Ϊ��ĸ���Ƿ���1�����򷵻�0 
	if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
		return 1;
	else
		return 0;
}
int main(){
	char str[max];
	int len=0,length=0;
	int point,place;
	gets(str);
	int flag=1;
	for(int i=0;i<=strlen(str);i++){
		if(!is_zimu(str[i])){//��ǰ�ַ�������ĸ 
			if(len>length){
				length=len;//��¼��һ�����ʳ��� 
				place=point;
			}
			flag=1;//�����1
			len=0;//���ʳ�����0,��������¼��һ�����ʳ��� 
		}else{
			if(flag)
				point=i;//��ŵ�ǰ��ĸԪ�ص��±� 
			len++;//���ʳ���+1 
			flag=0;//�����0 
		}
	}
	for(int i=place;i<place+length;i++){
		printf("%c",str[i]);
	}
	return 0;
}
