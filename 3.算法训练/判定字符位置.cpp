#include<stdio.h>
#include<string.h>
main(){
	char a[10000];
	gets(a);
	int len = strlen(a);
	int flag=1;//设定是否有元音字母的记号 
	for(int i=0;i<len;i++){
		if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u'){
			printf("%d",i+1);
			flag=0;//若有则记号变化 
			break;
		}
	}
	if(flag) printf("0");//记号没有变化则没有元音字母 
}
