#include<stdio.h> 
int main(){
	double BenJin,LiXi;
	double sum=0;
	scanf("%lf %lf",&BenJin,&LiXi);
	sum = BenJin+0.01*BenJin*LiXi-0.2*0.01*BenJin*LiXi;
	printf("%.2f",sum);
}
