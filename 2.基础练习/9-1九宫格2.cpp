#include<stdio.h> 
int main(){
	int sum=0,k=0;
	int s[100]={0};//结果数组,并赋初值为0
	/*定义二维数组*/
	int a[3][3];
	int i,j;
	/*录入A[m][s]*/
	for(i=0;i<3;i++){
		sum=0;//每输入一行时sum置为0 
		for(j=0;j<3;j++){
			scanf("%d",&a[i][j]);
			sum = sum+a[i][j];
		}
		s[k++] = sum;//每行的和 ,这个比较好理解 
	}
	
	for(sum=0,i=0;i<3;i++){
		sum=0;
		for(j=0;j<3;j++){
			sum+=a[j][i];
		}
		s[k++] = sum;//每列的和 ，联想矩阵转置，也好理解 
	}
	
	for(sum=0,i=0;i<3;i++)
		sum+=a[i][i];
	s[k++] = sum;//主对角线元素和 
	
	s[k++] = a[0][2]+a[1][1]+a[2][0];//副对角线元素和 
	
	//类似于选择排序的遍历 
	bool flag=true; 
	for(i=0;i<k-1;i++){
		for(j=i+1;j<k;j++){
			if(s[i] != s[j]){
				flag=false;//不相等则flag为假 
			}
		}
	}
	if(flag)//若flag真 
		printf("1");
	else
		printf("0");
	return 0;
}
