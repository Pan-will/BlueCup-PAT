#include<stdio.h>
#include<string.h>
int main(){
	char str[40];
	char sign,flag1,flag2;//������
	gets(str);//�����ַ��� 
	scanf("%c",&sign);//��������� 
	int flag;
	if(sign=='D'){
		scanf(" %c",&flag1);//ע���ʽ 
		flag=0;
		char *p=str;
		while(*p){
			if(*p==flag1 && flag==0){
				p++;
				flag=1;
			}
			printf("%c",*p);
			p++;
		}
	}
	if(sign=='I'){
		scanf(" %c %c",&flag1,&flag2);//ע���ʽ
		int len=strlen(str)-1;
		int i=len+1;
		int flag=0;
		while(len >= 0){
			if(str[len]==flag1 && flag==0){
				for(;i>len;i--){
					str[i]=str[i-1];
				}
				str[i]=flag2;
				flag=1;
			}
			len--;
		}
		len=strlen(str);
		str[len]='\0';
		printf("%s",str);
	}
	if(sign=='R'){
		scanf(" %c %c",&flag1,&flag2);//ע���ʽ
		char *p = str;
		while(*p){
			if(*p==flag1){
				*p=flag2;
			}
			p++;
		}
		printf("%s",str);
	}
	return 0; 
}
