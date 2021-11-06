#include<stdio.h>
#include<string.h>
int len;
void huiwen(char str[],int l){
	for(int i=0;i<l;i++){
		if(str[0]!=str[len-1]){
			printf("no!");
			return;
		}
	}
	printf("yes!");
}
int main(){
	char str[100];
	scanf("%s",&str);
	len = strlen(str);
	if(len%2==0){
		huiwen(str,len/2);
	}else{
		huiwen(str,(len-1)/2);
	}
	return 0;
}
