#include<stdio.h>
#define PI 3.141592654
int main(){
	float r;
	scanf("%f",&r);
	printf("%.1f",PI*r*r + 4*PI*r);
	return 0; 
}
