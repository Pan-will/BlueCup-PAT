#include<stdio.h>
main(){
	int a[10],b[10];
	int suma=0,sumb=0;
	for(int i=0;i<10;i++){
		scanf("%d%d",&a[i],&b[i]);
		suma+=a[i];
		sumb+=b[i];
	}
	printf("%d+%di",suma,sumb);
}
