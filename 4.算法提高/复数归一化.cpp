#include<stdio.h>
#include<math.h>
int main(){
	double a,b;
	double ai,bi;
	scanf("%lf%lf",&a,&b);
	ai = a/(sqrt(a*a+b*b));
	bi = b/(sqrt(a*a+b*b));
	printf("%.1f+%.1fi",ai,bi);
}
