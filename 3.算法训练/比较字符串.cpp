#include<stdio.h>
#include<string.h>
int main(){
	char s1[100],s2[100];
	scanf("%s%s",&s1,&s2);
	int len1 = strlen(s1);
	int len2 = strlen(s2);
	if(len1 == len2){
		for(int i=0;i<len1;i++){
			if(s1[i] == s2[i]){
				printf("0");
				return 0;
			}
		}
	}else if(len1<len2){
		for(int i=0;i<len1;i++){
			if(s1[i] != s2[i]){
				printf("%d",s1[i]-s2[i]);
				return 0;
			}
		}
	}else if(len1>len2){
		for(int i=0;i<len2;i++){
			if(s1[i] != s2[i]){
				printf("%d",s1[i]-s2[i]);
				return 0;
			}
		}
	}
}
