#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#define LONG 99999 
int main(){
	char str[LONG];
	gets(str);
	int lenth = strlen(str);
	if(lenth%2 == 0){
		int i,j;
		for(i=0,j=lenth-1;i<lenth/2;i++,j--){
			if(str[i] != str[j]){
				printf("false");
				return 0;
			}
		}
		printf("true");
	}else if(lenth%2 != 0){
		for(int i=0,j=lenth-1;i<(lenth-1)/2;i++,j--){
			if(str[i] != str[j]){
				printf("false");
				return 0;
			}
		}
		printf("true");
	}
}
