#include<stdio.h>
#include<string.h>
int main(){
	char str1[200];//�����ļ� 
	char str2[100001];//��ȷ�� 
	char sout[100001];//����� 
	scanf("%s\n%s",str1, str2);
	int count[130] = {0};
	//�������ļ����±�λֵ��1�����д�д�������д�±�λ����0
	for(int i=0;i<strlen(str1);i++){
		count[str1[i]] = 1;
		if(str1[i] >= 'A' && str1[i] <='Z'){
			count[str1[i]+32] = 1;
		}
		if(str1[i] >= 'a' && str1[i] <='z'){
			count[str1[i]-32] = 1;
		}
		if(str1[i]=='+'){
			for(int j=65;j<=90;j++){
				count[j] = 1;
			}
		}
	}
	
	//�����ԵĴ����±�λֵ����0�ģ����ַ�����sout���飬����Ӧ�±�λ��1
	int j=0;
	for(int i=0;i<strlen(str2);i++) {
		if(count[str2[i]] != 1){
			sout[j++] = str2[i];
		}
	}
	//����sout����������ļ�
	if(j==0){
		 printf("\n");	
	}else{
		for(int i=0; i<j; i++) { 
			printf("%c", sout[i]);
		}
	}
	return 0;
}
