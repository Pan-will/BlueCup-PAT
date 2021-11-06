#include<stdio.h>
#include<string.h>
int main(){
	char str[20],b[20];
	char ch;
	int j=0;
	gets(str);
	int len = strlen(str);
	ch = getchar();
	for(int i=0;i<len;i++){
		while(ch==' ' || ch=='\n'){
			printf(" ");
			return 0;
		}
		if(str[i]!=ch){
			b[j]=str[i];
			j++;
		}
	}
	for(int i=0;i<j;i++){
		printf("%c",b[i]);
	}
	return 0;
}

