#include<stdio.h>
#include<string.h>
int main(){
	char s1[82];//��ȷ�Ĵ� 
	char s2[82];//����Ĵ� 
	char sout[82];//���ļ� 
	scanf("%s\n%s",s1, s2);  
	int count[200] = {0}; 
	//�Ȱ�Ӧ��������±�λ��ֵΪ1 
	for(int i=0;i<strlen(s1);i++){
		if(s1[i] >= 'a' && s1[i] <= 'z'){       
			count[s1[i]-32] = 1;
		}else{
			count[s1[i]] = 1;
		}
	}
	//�ٰ�ʵ��������±�λ��ֵΪ0 
	for(int i=0;i<strlen(s2);i++){
		if(s2[i] >= 'a' && s2[i] <= 'z'){ 
			count[s2[i] - 32] = 0;
		}else{
			count[s2[i]] = 0;
		}
	}
	//�±�λ����0�ģ����ַ�����sout���飬�ҽ���Ӧ�±�λֵ��0 
	int j = 0;
	for(int i=0;i<strlen(s1);i++){
		if(s1[i] >= 'a' && s1[i] <= 'z' && count[s1[i]-32] > 0){              
			sout[j++] = (char)(s1[i] - 32);
			count[s1[i]-32] = 0;
		}else if(count[s1[i]] > 0){
			sout[j++] = s1[i];
			count[s1[i]] = 0;
		}
	}
	//����sout����������ļ� 
	for(int i=0; i<j; i++) { 
		printf("%c", sout[i]);
	}
	return 0;
}
