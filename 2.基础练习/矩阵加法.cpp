#include<stdio.h> 
int main(){
	int m,n;
	scanf("%d%d",&m,&n);
	int A[110][110]={0},B[110][110]={0},C[110][110]={0};
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&A[i][j]);
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&B[i][j]);
		}
	}
	for(int i=0;i<m;i++)
		for(int j=0;j<m;j++){
			C[i][j] = A[i][j]+B[i][j];
		}
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++)
				printf(" %d",C[i][j]);
			printf("\n");
		}
}

