#include<stdio.h>
int main(){
	char c1='B',c2='O',c3='Y',c4='\101',c5='\116';
	
	printf("a%cb%c\tc%c\tabc\n\n",c1,c2,c3);
	printf("\t\b%c%c\n",c4,c5);
	
	int a=3,b=4,c=5;
	printf("\n%d",!(a+b));//0
	printf("\n%d",!(a+b)+c-1&&b+c/2);//1
	
	int x=15,n=2;
	printf("\n%d",x%=(n+=3));//0
	
	char str1='T',str2='r';
	if(str1-0<='Z' && str1-0>='A')
		printf("\n\n%d",1);
}
