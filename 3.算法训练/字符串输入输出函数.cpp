#include<stdio.h>
void GetReal(double a){
	printf("%.2f\n",a);
}
void GetString(char b[]){
	printf("%s\n",b);
}
main(){
	double a;
	char b[100];
	scanf("%lf",&a);
	scanf("%s",&b);
	printf("please input a number:\n");
	printf("please input a string:\n");
	GetReal(a);
	GetString(b);
}
