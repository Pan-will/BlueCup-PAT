#include<stdio.h>
main(){
	int a,b,c,d,e,f;
	scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
	long long int y = (c*d-f*a)/(b*d-e*a);
	long long int x = (c-b*y)/a;
	printf("%lld %lld",x,y);
}
 
