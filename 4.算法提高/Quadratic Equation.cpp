#include<stdio.h>
#include<math.h>
int main(){
	float a,b,c;
	scanf("%f%f%f",&a,&b,&c);
	float x1 = (-b+sqrt(b*b-4*a*c))/(2*a);
	float x2 = (-b-sqrt(b*b-4*a*c))/(2*a);
	if(x2>x1) printf("%.2f %.2f",x2,x1);
	else printf("%.2f %.2f",x1,x2);
	return 0;
}
