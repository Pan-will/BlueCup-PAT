/*
思路：
 
首先是定义一个二维数组，然后全赋予初始值0，即没有皇后，为假；
然后定义一个递归函数，在递归函数内定义三个数组：
a［12］:每一竖皇后剩余数,初始为1
b［2*12］:从↗到↙对角线皇后剩余数,初始为1
c［2*12］:从↖到↘对角线皇后剩余数,初始为1

固定以行为基础去递归，当符合a[col]&&b[n+col]&&c[n-col+n-1]，即各项均为1时，为真,则放好一个皇后Queen［n］［col］;
与其相关的a［col］，b［n+col］，c［n－col＋n-1］都被赋值为0（col为行数），为后续的判定提供判断;
当递归到第n-1行时，符合每次递归的条件的情况使摆法加一;
如果不到第n-1行则持续递归，并在每一次循环结束后都要取消皇后位置，即恢复初始棋盘赋值，保证后面的循环的功能性。
*/ 
#include<stdio.h>
#include<memory.h>

int sum=0;//表共有多少种放法即结果
int gong[12][12]={0}; //定义二维数组代表n*n棋盘 
int lie[12];//代表一竖n行 
int xie1[2*12];//代表从↖到↘对角线
int xie2[2*12];//代表从↘到↖对角线

void HuangHou(int k,int n){//n表示棋盘规模即循环次数 
	int hang;//控制皇后的位置
	/*从第一行开始确定皇后的位置,递增，hang表示皇后在改行的第几个位置上*/
	for(hang=0;hang<n;hang++) {
		//判断该位置竖、对角线都还可以放皇后时执行if，即初始值未变为真(即1) 
		if(lie[hang] && xie1[k+hang] && xie2[k-hang+n-1]){
			gong[k][hang]=1;//放上皇后，置值为1 
			lie[hang]=0;//该列都不能再放皇后,置值为0
			xie1[k+hang]=0;//该位置正对角线上不能再放皇后，置值为0
			xie2[k-hang+n-1]=0;//该位置负对角线上不能再放皇后，置值为0
			if(k==n-1) {//是否执行到第n-1行，是则结果+1，否则执行else 
				sum++;
			}else {//试探走不通则回溯 
				HuangHou(k+1,n);//递归调用，参数递增 
			}
			gong[k][hang]=0;//拿掉皇后，置值为0 
			xie1[k+hang]=1;//正对角线上恢复初始值 
			xie2[k-hang+n-1]=1;//负对角线上恢复初始值 
			lie[hang]=1;//该列恢复初始值
		}
	}
}

int main(){
	int n;
	scanf("%d",&n);
	int b[n][n];
	for(int i=0;i<n;i++) {
		for(int j=0;j<n;j++){
			scanf("%d",&b[i][j]);
		}
	}
	memset(lie,1,sizeof(lie));//赋初值 
	memset(xie1,1,sizeof(xie1));
	memset(xie2,1,sizeof(xie2));
	HuangHou(0,n);
	printf("%d",sum);
	return 0;
}

