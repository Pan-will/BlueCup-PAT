#include<stdio.h> 
int main(){
	double ben;
	double lilv;
	scanf("%lf%lf",&ben,&lilv);
	double lixi=ben*lilv/100;
	printf("%.2lf",ben+lixi*0.8);
}
