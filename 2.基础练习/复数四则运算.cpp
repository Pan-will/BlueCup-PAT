#include<stdio.h>
int main(){
	char sign;
	double a,b,c,d;
	scanf("%lf %lf %c %lf %lf",&a,&b,&sign,&c,&d);
	if(c==0 && d==0){
		printf("error");
	}else if(sign=='+'){
		printf("%g+%gi",a+c,b+d);
	}else if(sign=='-'){
		printf("%g%gi",a-c,b-d);
	}else if(sign=='*'){
		printf("%g%gi",a*c-b*d,a*d+b*c);
	}else if(sign=='/'){
		printf("%g%gi",(a*c+b*d)/(c*c+d*d),(b*c-a*d)/(c*c+d*d));
	}else{
		printf("error");
	}
}
