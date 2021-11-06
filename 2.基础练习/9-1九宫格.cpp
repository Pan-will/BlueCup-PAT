#include<stdio.h> 
int main(){
	/*定义二维数组*/
	int a[3][3];
	/*录入*/
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			scanf("%d",&a[i][j]);
		}
	}
	
	int row1=0,row2=0,row3=0,pol1=0,pol2=0,pol3=0,Xie1=0,Xie2=0;
	row1 = a[0][0]+a[0][1]+a[0][2];
	row2 = a[1][0]+a[1][1]+a[1][2];
	row3 = a[2][0]+a[2][1]+a[2][2];
	
	pol1 = a[0][0]+a[1][0]+a[2][0];
	pol2 = a[0][1]+a[1][1]+a[2][1];
	pol3 = a[0][2]+a[1][2]+a[2][2];
	
	Xie1 = a[0][0]+a[1][1]+a[2][2];
	Xie2 = a[0][2]+a[1][1]+a[2][0];
	
	if(row1 == row2 == row3 == pol1 == pol2 == pol3 == Xie1 == Xie2){
		printf("1");
	}
	else{
		printf("0");
	}
}
