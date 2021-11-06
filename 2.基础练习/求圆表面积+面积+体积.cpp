#include<stdio.h>
#define pi 3.1415926536
int main(){
	double r;
	scanf("%lf",&r);
	printf("面积是：%.2f\n",pi*r*r);
	printf("表面积是：%.2f\n",4*pi*r*r);
	printf("体积是：%.2f",4*pi*r*r*r/3);
}
