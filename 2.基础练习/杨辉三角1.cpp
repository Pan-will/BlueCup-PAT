#include<stdio.h>
int main(){
	int i,j,n,a[17]={0,1},l,r;
	while(n<1 || n>16){
		scanf("%d",&n);
	}
	for(i=1;i<=n;i++){
		l=0;
		for(j=1;j<=i;j++){
			r=a[j];
			a[j]=l+r;
			l=r;
	   		printf("%d ",a[j]);
		}
	 	printf("\n");
	}
}

