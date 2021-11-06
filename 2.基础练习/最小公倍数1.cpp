/*最小公倍数=两整数的乘积 ÷最大公约数*/
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
