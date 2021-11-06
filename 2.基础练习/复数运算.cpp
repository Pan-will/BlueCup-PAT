#include<stdio.h>
int main(){
	char sign;
	double a,b,c,d;
	scanf("%c%lf%lf%lf%lf",&sign,&a,&b,&c,&d);
	if(sign=='+'){
		printf("%.2lf+%.2lfi",a+c,b+d);
	}else if(sign=='-'){
		printf("%.2lf+%.2lfi",a-c,b-d);
	}else if(sign=='*'){
		printf("%.2lf+%.2lfi",a*c-b*d,a*d+b*c);
	}else if(sign=='/'){
		printf("%.2lf+%.2lfi",(a*c+b*d)/(c*c+d*d),(b*c-a*d)/(c*c+d*d));
	}
}
