#include<stdio.h> 
int main(){
	int i,j,k;
	int a[2][3]={1,2,3,4,5,6},b[3][4]={1,2,3,4,5,6,7,8,9,10,11,12},c[2][4]={0};
	for(i=0;i<2;i++)
		for(j=0;j<4;j++)
			for(k=0;k<3;k++){
				c[i][j]+=a[i][k]*b[k][j];
				printf("%d ",c[i][j]);
			}
			for(i=0;i<2;i++){
				printf("\n");
				for(j=0;j<4;j++)
				printf("%4d",c[i][j]);
			}
		getchar();
}
