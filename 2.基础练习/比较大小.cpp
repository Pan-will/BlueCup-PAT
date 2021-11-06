#include<stdio.h>
main()
{
	int a,b,c,t,m,n;
	scanf("%d %d %d",&a,&b,&c);
	if(a<b) {
		t = b;
		b = a;
		a = t;
	}
	if(a<c){
		n = c;
		c = a;
		a = n;
	}
	if(b<c) {
		m = b;
		b = c;
		c = m;
	}
	printf("%d > %d > %d",a,b,c);
}
