#include<stdio.h>
int main(){
	double a = 3.0/0.0;
	printf("%lfd\n\n",a);
	printf("%lf\n\n",1/a);
	printf("%lf\n\n",a*-1);
	printf("%lf\n\n",1/(-a));
	printf("%lf",a-a);
	double b = 0.0/0.0;
	printf("\n\n%lf",b);
}
