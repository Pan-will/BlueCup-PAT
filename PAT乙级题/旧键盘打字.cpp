#include<stdio.h>
#include<string.h>
int main(){
	char str1[200];//坏掉的键 
	char str2[100001];//正确串 
	char sout[100001];//输出串 
	scanf("%s\n%s",str1, str2);
	int count[130] = {0};
	//遍历坏的键，下标位值置1；若有大写键，则大写下标位均置0
	for(int i=0;i<strlen(str1);i++){
		count[str1[i]] = 1;
		if(str1[i] >= 'A' && str1[i] <='Z'){
			count[str1[i]+32] = 1;
		}
		if(str1[i] >= 'a' && str1[i] <='z'){
			count[str1[i]-32] = 1;
		}
		if(str1[i]=='+'){
			for(int j=65;j<=90;j++){
				count[j] = 1;
			}
		}
	}
	
	//遍历对的串，下标位值等于0的，把字符赋给sout数组，且相应下标位置1
	int j=0;
	for(int i=0;i<strlen(str2);i++) {
		if(count[str2[i]] != 1){
			sout[j++] = str2[i];
		}
	}
	//遍历sout数组输出坏的键
	if(j==0){
		 printf("\n");	
	}else{
		for(int i=0; i<j; i++) { 
			printf("%c", sout[i]);
		}
	}
	return 0;
}
