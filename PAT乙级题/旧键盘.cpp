#include<stdio.h>
#include<string.h>
int biJiao(char str[],char ch){
	int len = strlen(str);
	int flag = 0;
	for(int i=0;i<len;i++){
		if(str[i] == ch){
			flag = 1;
			break;
		}
	}
	return flag;
}

char daXie(char c){
	if((c>='a')&&(c<='z'))
		c = c-32;
	return c;
}

void quChong(char str[]){
	int index=1;
	char b[strlen(str)];
	b[0] = str[0];
	for(int i=1;i<strlen(str);i++){
		if(str[i] != str[i-1]){
			b[index++] = str[i];
		}
	}
	for(int i=0;i<index;i++){
		printf("%c",b[i]);
	}
}

int main(){
	char str1[80],str2[80],str[80];
	int num=0;//об╠Й 
	scanf("%s\n%s",&str1,&str2);
	int len = strlen(str2);
	for(int i=0;i<len;i++){
		if(str1[i] != str2[i] && biJiao(str2,str1[i])==0){
			str[num] = daXie(str1[i]);
			num += 1;
		}
	}
	quChong(str);
	return 0;
}
