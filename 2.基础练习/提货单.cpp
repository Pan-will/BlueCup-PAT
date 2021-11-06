#include<stdio.h>
int main(){
	int N,SL;
	char MC;
	double DJ,All=0;
	scanf("%d",&N);
	for(int i=0;i<N;i++){
		scanf("%s %lf %d",&MC,&DJ,&SL);
		All += DJ*SL;
	}
	printf("%.6f",All);
	return 0;
}
