#include<stdio.h>  
int main(){
	int i,j,n,a[35][35]={0,1};
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			a[i][j]=a[i-1][j-1]+a[i-1][j];
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
