#include<stdio.h> 
int main(){
	float BenJin,LiXi;
	float sum=0;
	scanf("%f %f",&BenJin,&LiXi);
	sum = BenJin+0.01*BenJin*LiXi-0.05*0.01*BenJin*LiXi;
	printf("%.2f",sum);
}
