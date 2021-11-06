/*整数的基本性质与应用*/
#include<stdio.h>
int gcd(int a,int b);
int main(){
	int a,b;
	scanf("%d %d",&a,&b);
	/* 
	//暴力搜索 
	for(int i=a;i>=1;i--){
		if(a%i==0 && b%i==0){
			printf("%d",i);
			break;
		}
	}
	*/
	/* 
	//辗转相除法 ,while法 
	while(a!=0){
		int t = a;
		a = b%a;
		b = t;
	}
	printf("%d",b);
	*/
	/*
	 //辗转相除法 ,递归法 
	 int t = gcd(a,b);
	 printf("%d",t);
	 */
	//最小公倍数
	/*
		最小公倍数 = a*b/最大公约数 
	*/ 
}
int gcd(int a,int b){
	printf("%d %d\n",a,b);
	if(a==0) return b;
	return gcd(b%a,a);
}
