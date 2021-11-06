#include<stdio.h>
#include<string.h>
int main(){
	char str1[100001];//坏掉的键 
	char str2[100001];//正确串 
	scanf("%s\n%s",str1, str2);
	int len1 = strlen(str1);
	int len2 = strlen(str2);
	
	int flag = 0;//做标记 
	for(int i=0;i<len1;i++){
		if(str1[i] == '+')
			flag = 1;
	}
	
	for(int i=0;i<len2;i++){
		if(flag && str2[i]>='A' && str2[i]<='Z')
			continue;
		int j=0;
		for(j=0;j<len1;j++){
			char ch;
			if(str2[i]>='a' && str2[i]<='z'){
				ch = str2[i] - 32;
			}else{
				ch = str2[i];
			}
			if(ch == str1[j])
				break;
		}
		if(j == len1){
			printf("%c",str2[i]);
		}
	}
//	printf("\n");
	return 0;
}
