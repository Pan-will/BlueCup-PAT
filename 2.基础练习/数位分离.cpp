#include<stdio.h> 
int main(){
	int a,b,c,n;
	long i;
	scanf("%d",&n);
	if(n<=9){
		printf("%d",n);
	}
	else if(n>9 && n<=99){
		b = n / 10 % 10;
		c = n / 1 % 10;
		printf("%d %d",b,c);
	}
	else if(n>99){
		a = n / 100 % 10;
		b = n / 10 % 10;
		c = n / 1 % 10;
		printf("%d %d %d",a,b,c);
	}
}

