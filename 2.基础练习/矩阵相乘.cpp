#include<stdio.h> 
int main(){
	int m,s,n;
	/*输入m,s,n*/
	scanf("%d%d",&m,&s);
	/*定义三个二维数组,并赋初值为0*/
	int A[300][300]={0},B[300][300]={0},C[300][300]={0};
	/*录入A[m][s]*/
	for(int i=0;i<m;i++){
		for(int j=0;j<s;j++){
			scanf("%d",&A[i][j]);
		}
	}
	scanf("%d%d",&s,&n);
	/*录入B[s][n]*/
	for(int i=0;i<s;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&B[i][j]);
		}
	}
	/*乘法计算，输出结果*/
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

