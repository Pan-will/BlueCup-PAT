/*��С������=�������ĳ˻� �����Լ��*/
#include<stdio.h> 
int main(){
	int m,n,a,b,c;
	scanf("%d %d",&m,&n);
	a=m;
	b=n;
	while(b!=0){
		c=a%b;
		a=b;
		b=c;
	}
	printf("%d",m*n/a);
} 
