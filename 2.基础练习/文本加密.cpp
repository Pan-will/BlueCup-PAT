#include<stdio.h>
#include<string.h>
int main(){
	char s[60];//�ַ����� 
	int len=0;
	scanf("%s",&s);//���� 
	len = strlen(s);//ȡ���� 
//	printf("%d\n",len); 
	for(int i=0;i<len;i++){
		/*�޶�ȡֵ��ΧΪ��ĸ*/
		if((s[i]>64 && s[i]<91) || (s[i]>96 && s[i]<123)){
			if(s[i]=='z'){
				s[i]='A';
			}else if(s[i]=='Z'){
				s[i]='a';
			}else{
				s[i] = s[i] + 1;
			}
		}else{
			s[i] = s[i];
		}
		
	}
	printf("%s",s);
}
