/*2.506184*/
#include<stdio.h>
#include<math.h>
int main(){
	double x;
	for(x=2.00;x<3.00;x+=0.00000001){
		if(fabs(pow(x,x)-10.00)<0.000001){
			printf("%.8lf\n",x);
//			break;
		}
	}
	return 0;
}
