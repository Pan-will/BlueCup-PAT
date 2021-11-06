#include<stdio.h>
#include<string.h>
int main(){
	char str[999];
	char *p = str;
	int num=0;//放置各位数字的和，初值为0 
	gets(str);
	for(p=str;(*p)!='\0';p++){
		if(((*p)>='\0') && ((*p)<='9')){
			num+=(*p)-48;
		}
	}
	char b[20][10]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};  
	int baiwei = num / 100 % 10;
	int shiwei = num / 10 % 10;
	int gewei = num / 1 % 10;
	if(baiwei != 0){
		printf("%s %s %s",b[baiwei],b[shiwei],b[gewei]);
	}else if(baiwei == 0 && shiwei != 0){
		printf("%s %s",b[shiwei],b[gewei]);
	}else if(baiwei == 0 && shiwei == 0){
		printf("%s",b[gewei]);
	}
}
