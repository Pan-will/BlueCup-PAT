/*
最小公倍数=两整数的乘积 ÷最大公约数;
*/
#include<stdio.h> 
//递归求最大公约数 
int gcd(int m,int n)  
{  
    return n==0?m:gcd(n,m%n);  
}
//相减法求最大公约数
int gcd2(int a,int b){
	while(a!=b){
		if(a>b){
			a = a-b;
		} else {
			b = b-a;
		}
	}
	return a;//最大公约数是a or b
}
int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	int min1 = (a*b)/gcd2(a,b);//a和b的最小公倍数 
	int min2 = (min1*c)/gcd2(min1,c);//a、b和c的最小公倍数 
	printf("%d",min2);
}
