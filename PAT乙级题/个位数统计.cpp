#include<stdio.h> 
#include<string.h>
int main(){
	char str[1000];
	int num[10] = {0};//ͳ��ÿ�����ֳ��ֵĴ���,��ֵΪ0 
	scanf("%s",&str);
	int len = strlen(str);
	for(int i=0;i<len;i++) {
		num[str[i]-'0']++;
	}
	for(int i=0;i<10;i++){
		if(num[i] == 0){
			continue;
		}
		printf("%d:%d\n",i,num[i]);
	}
	return 0;
}

