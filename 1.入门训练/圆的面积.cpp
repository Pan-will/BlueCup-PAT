#include<stdio.h>
#include<math.h>
int main(){
	int r;
	scanf("%d",&r);
	double PI=atan(1.0)*4;
	double s=PI*r*r;
	printf("%.7f",s);
}
