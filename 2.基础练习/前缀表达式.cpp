#include<stdio.h> 
int main(){
	char cao;
	int a,b;
	scanf("%c%d%d",&cao,&a,&b);
	if(cao=='+'){
		printf("%d",a+b);
	}else if(cao=='-'){
		printf("%d",a-b);
	}else if(cao=='*'){
		printf("%d",a*b);
	}else if(cao=='/'){
		printf("%d",a/b);
	}
}
