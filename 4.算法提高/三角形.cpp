/*
求三角形的外接圆心坐标：O（x，y） 
三角形：a（x1,y1） b（x2,y2） c（x3,y3）
满足：A1*x+B1y=C1;A2*x+B2y=C2; 
根据克拉默法则： 
	x=((C1*B2)-(C2*B1))/((A1*B2)-(A2*B1))； 
	y=((A1*C2)-(A2*C1))/((A1*B2)-(A2*B1))；  
*/ 
/*
求三角形的外心的坐标： 
满足：A1*x+B1y=C1;A2*x+B2y=C2;
根据克拉默法则：
      x=((C1*B2)-(C2*B1))/((A1*B2)-(A2*B1))；
      y=((A1*C2)-(A2*C1))/((A1*B2)-(A2*B1))；
*/ 
#include<stdio.h>
#include<math.h>
#include<string.h>
int x[4],y[4];
void zc(){
	double a=(x[1]-x[2])*(x[1]-x[2])+(y[1]-y[2])*(y[1]-y[2]);
	double b=(x[2]-x[3])*(x[2]-x[3])+(y[2]-y[3])*(y[2]-y[3]);
	double c=(x[3]-x[1])*(x[3]-x[1])+(y[3]-y[1])*(y[3]-y[1]);
	printf("%.2lf\n",sqrt(a)+sqrt(b)+sqrt(c));
}
void mj(){
	double a=(x[1]-x[2])*(x[1]-x[2])+(y[1]-y[2])*(y[1]-y[2]);
    double b=(x[2]-x[3])*(x[2]-x[3])+(y[2]-y[3])*(y[2]-y[3]);
    double c=(x[3]-x[1])*(x[3]-x[1])+(y[3]-y[1])*(y[3]-y[1]);
    a=sqrt(a);
    b=sqrt(b);
    c=sqrt(c);
    double s=(a+b+c)/2;
    s=s*(s-a)*(s-b)*(s-c);
    printf("%.2lf\n",sqrt(s));
}
void waixin(double &a,double &b){
	double A1=2*(x[2]-x[1]);
    double B1=2*(y[2]-y[1]);
    double C1=(x[2]*x[2]+y[2]*y[2]-x[1]*x[1]-y[1]*y[1]);
    double A2=2*(x[3]-x[2]);
    double B2=2*(y[3]-y[2]);
    double C2=x[3]*x[3]+y[3]*y[3]-x[2]*x[2]-y[2]*y[2];

    a=((C1*B2)-(C2*B1))/((A1*B2)-(A2*B1));
    b=((A1*C2)-(A2*C1))/((A1*B2)-(A2*B1));
}
void zhongxin(double &c,double &d){
	c=(x[1]+x[2]+x[3])/3.0;
    d=(y[1]+y[2]+y[3])/3.0;
}
main(){
	for(int i=1;i<=3;i++){
		scanf("%ld%ld",&x[i],&y[i]);
	}
	zc();
	mj();
	double a,b;
	waixin(a,b);
	printf("%.2lf %.2lf\n",a,b);
	double c,d;
	zhongxin(c,d);
	printf("%.2lf %.2lf",c,d);
}
