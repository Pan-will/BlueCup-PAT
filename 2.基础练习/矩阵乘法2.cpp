#include<stdio.h> 
int main(){
	int m,s,n,x,y,z;
	/*输入m,s,n*/
	printf("请输入该m,s,n：\n");
	scanf("%d %d %d",&m,&s,&n);
	printf("m、s、n：%d %d %d\n\n",m,s,n);
	/*定义三个二维数组,并赋初值为0*/
	int A[m][s]={0},B[s][n]={0},C[m][n]={0};
	/*录入A[m][s]*/
	printf("请输入该m*s矩阵：\n");
	for(int i=0;i<m;i++){
		for(int j=0;j<s;j++){
			scanf("%d",&A[i][j]);
		}
	}
	/*打印A[m][s]*/
	printf("\n\n该m*s矩阵为：\n");
	for(int i=0;i<m;i++){
		for(int j=0;j<s;j++){
			printf("%3d ",A[i][j]);
		}
		printf("\n");
	}
	
	/*录入B[s][n]*/
	printf("\n\n请输入该s*n矩阵：\n");
	for(int i=0;i<s;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&B[i][j]);
		}
	}
	/*打印B[s][n]*/
	printf("\n\n该s*n矩阵为：\n");
	for(int i=0;i<s;i++){
		for(int j=0;j<n;j++){
			printf("%3d ",B[i][j]);
		}
		printf("\n");
	}
	/*乘法计算，输出结果*/
	printf("\n\n以上两个矩阵的乘积C[m][n]为：\n\n");
	for(x=0;x<m;x++)
		for(y=0;y<n;y++)
			for(z=0;z<s;z++){
				C[x][y] += A[x][z]*B[z][y];
//				printf("%d",C[x][y]);
			}
			for(x=0;x<m;x++){
				printf("\n");
				for(y=0;y<n;y++)
					printf("%4d",C[x][y]);
			}
			getchar();
}

