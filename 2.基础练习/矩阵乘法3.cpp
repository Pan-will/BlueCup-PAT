#include<stdio.h> 
int main(){
	int m,s,n;
	/*����m,s,n*/
	scanf("%d%d%d",&m,&s,&n);
	/*����������ά����,������ֵΪ0*/
	int A[300][300]={0},B[300][300]={0},C[300][300]={0};
	/*¼��A[m][s]*/
	for(int i=0;i<m;i++){
		for(int j=0;j<s;j++){
			scanf("%d",&A[i][j]);
		}
	}
	/*¼��B[s][n]*/
	for(int i=0;i<s;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&B[i][j]);
		}
	}
	/*�˷����㣬������*/
	for(int i=0;i<m;i++)
		for(int j=0;j<n;j++)
			for(int z=0;z<s;z++){
				C[i][j] += A[i][z]*B[z][j];
			}
			for(int i=0;i<m;i++){
				for(int j=0;j<n;j++)
					printf("%d ",C[i][j]);
				printf("\n");
			}
}

