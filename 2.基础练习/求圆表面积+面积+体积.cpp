#include<stdio.h>
#define pi 3.1415926536
int main(){
	double r;
	scanf("%lf",&r);
	printf("����ǣ�%.2f\n",pi*r*r);
	printf("������ǣ�%.2f\n",4*pi*r*r);
	printf("����ǣ�%.2f",4*pi*r*r*r/3);
}
