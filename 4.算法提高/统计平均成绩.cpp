#include<stdio.h>
int main(){
	float a[4],b[4],c[4],d[4];
	float suma=0,sumb=0,sumc=0,sumd=0;
	for(int i=0;i<4;i++){
		scanf("%f%f%f%f",&a[i],&b[i],&c[i],&d[i]);
		suma+=a[i];
		sumb+=b[i];
		sumc+=c[i];
		sumd+=d[i];
	}
	printf("%.2f\n%.2f\n%.2f\n%.2f",suma/4.0,sumb/4.0,sumc/4.0,sumd/4.0);
	return 0;
}
