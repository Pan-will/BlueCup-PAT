/*Çó¾ØÕóÔªËØºÍ*/
#include<stdio.h> 
int main(){
	int i,j,m,n,sum=0;
	scanf("%d%d",&n,&m);
	int a[n][m]={0};
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&a[i][j]);
			sum += a[i][j];
		}
	}
	printf("%d",sum);
}

