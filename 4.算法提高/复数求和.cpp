#include<stdio.h>
main(){
	int n;
	scanf("%d",&n);
	int a[n],b[n];
	int suma=0,sumb=0;
	if(n!=0){
		for(int i=0;i<n;i++){
			scanf("%d%d",&a[i],&b[i]);
			suma+=a[i];
			sumb+=b[i];
		}
		n--;
	}
	printf("%d+%di",suma,sumb);
}
