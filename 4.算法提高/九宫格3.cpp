#include<stdio.h> 
int main(){
	int sum=0,k=0,f=1;
	int s[100]={0};
	/*定义二维数组,并赋初值为0*/
	int a[3][3];
	int i,j;
	/*录入A[m][s]*/
	for(i=0;i<3;i++){
		sum=0;//每输入一行时sum置为0 
		for(j=0;j<3;j++){
			scanf("%d",&a[i][j]);
			sum = sum+a[i][j];
		}
		s[k++] = sum;//每行的和 
	}
	
	for(sum=0,i=0;i<3;i++){
		sum=0;
		for(j=0;j<3;j++){
			sum+=a[j][i];
		}
		s[k++] = sum;//每列的和 
	}
	
	for(sum=0,i=0;i<3;i++)
		sum+=a[i][i];
	s[k++] = sum;//主对角线元素和 
	s[k++] = a[0][2]+a[1][1]+a[2][0];//副对角线元素和 
	for(i=0;i<k-1;i++)
		for(j=i+1;j<k;j++){
			if(s[i] != s[j]){
				f=0;
			}
		}
	s[k++] = sum;//每列的和 
	if(f)
		printf("1");
	else
		printf("0");
	return 0;
}
