#include<stdio.h>
/*
	½×³Ë¼ÆËãµÝ¹é·¨ .
*/
long long f(long long n){
	if(n==0) return 0;
	if(n==1) return 1;
	return n*f(n-1);
}
main(){
	long long n;
	scanf("%lld",&n);
	printf("%lld",f(n));
}

