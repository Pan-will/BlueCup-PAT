#include<stdio.h> 
int main(){
	int m,s,n,x,y,z;
	/*����m,s,n*/
	printf("�������m,s,n��\n");
	scanf("%d %d %d",&m,&s,&n);
	printf("m��s��n��%d %d %d\n\n",m,s,n);
	/*����������ά����,������ֵΪ0*/
	int A[m][s]={0},B[s][n]={0},C[m][n]={0};
	/*¼��A[m][s]*/
	printf("�������m*s����\n");
	for(int i=0;i<m;i++){
		for(int j=0;j<s;j++){
			scanf("%d",&A[i][j]);
		}
	}
	/*��ӡA[m][s]*/
	printf("\n\n��m*s����Ϊ��\n");
	for(int i=0;i<m;i++){
		for(int j=0;j<s;j++){
			printf("%3d ",A[i][j]);
		}
		printf("\n");
	}
	
	/*¼��B[s][n]*/
	printf("\n\n�������s*n����\n");
	for(int i=0;i<s;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&B[i][j]);
		}
	}
	/*��ӡB[s][n]*/
	printf("\n\n��s*n����Ϊ��\n");
	for(int i=0;i<s;i++){
		for(int j=0;j<n;j++){
			printf("%3d ",B[i][j]);
		}
		printf("\n");
	}
	/*�˷����㣬������*/
	printf("\n\n������������ĳ˻�C[m][n]Ϊ��\n\n");
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

