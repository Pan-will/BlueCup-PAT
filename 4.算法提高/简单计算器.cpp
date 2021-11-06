#include<stdio.h>
int main(){
	int a,b;
	char sign;
	scanf("%c%d%d",&sign,&a,&b);
	switch(sign){
		case '+':
			printf("%d",a+b);
			break; 
		case '-':
			printf("%d",a-b);
			break;
		case '*':
			printf("%d",a*b);
			break;
		case '/':
			printf("%d",a/b);
			break;
	}
	return 0;
}
