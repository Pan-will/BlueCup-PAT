#include<stdio.h> 
int main(){
	int N,M;
	scanf("%d%d",&N,&M);
	int A[N][N]={0},C[N][N]={0};
	for(int i=0;i<N;i++){
		for(int j=0;j<N;j++){
			scanf("%d",&A[i][j]);
		}
	}
	for(int i=0;i<M;i++)
		for(int j=0;j<N;j++)
			for(int z=0;z<N;z++){
				C[i][j] += A[i][z]*A[z][j];
			}
			for(int i=0;i<N;i++){
				for(int j=0;j<N;j++)
					printf("%d ",C[i][j]);
				printf("\n");
			}
}

