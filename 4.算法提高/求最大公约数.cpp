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
	int m,n;
	scanf("%d%d",&m,&n);
	printf("%d",gcd2(m,n));
} 
