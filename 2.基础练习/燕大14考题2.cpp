#include<stdio.h>
main(){
	int m=7;
	printf("%d\n",m/2+1);
	printf("%d\n",m/2.0+1);
	printf("%f\n",(float)m/2+1);
	printf("m=%d\n",m);
	
	
	int a=1,b=2,c=3,u;
	u=(a==2) ? b+a : c+a;
	printf("%d",u);
}
