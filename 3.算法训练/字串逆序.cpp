#include<stdio.h>
#include<string.h>
main(){
	char a[100];
	gets(a);
	int len=strlen(a);
	for(int i=len;i>=0;i--){
		printf("%c",a[i]);
	}
}
