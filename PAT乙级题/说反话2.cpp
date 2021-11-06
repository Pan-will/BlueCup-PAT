#include<stdio.h>
#include<string.h>
int main(){
	char str[100] ;
	str[0] = ' ';
	gets(str+1);
	int len = strlen(str);
	for(int i=len-1;i>=0;i--){
		if(str[i] == ' '){
			printf("%s",str+i+1);
			str[i] = '\0';
			if(i != 0) printf("%c",' ');
		}
		else
			continue;
	}
}
