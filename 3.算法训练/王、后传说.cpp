#include<stdio.h>
#include<memory.h>
int sum=0;//表共有多少种放法即结果 
int gong[12][12]={0}; //定义二维数组代表n*n棋盘 
int lie[12];//代表一竖n行 
int xie1[2*12];//代表从↖到↘对角线
int xie2[2*12];//代表从↘到↖对角线

void HuangHou(int k,int n,int x,int y){//n表示棋盘规模即循环次数 
	int hang;//控制皇后的位置
	/*从第一行开始确定皇后的位置,递增，hang表示皇后在该行的第几个位置上*/
	for(hang=0;hang<n;hang++) {
		//判断该位置竖、对角线都还可以放皇后时执行if，即初始值未变为真(即1) 
		gong[x][y]=0;
		gong[x-1][y-1]=0;
		gong[x-1][y]=0;
		gong[x-1][y+1]=0;
		gong[x][y-1]=0;
		gong[x][y+1]=0;
		gong[x+1][y-1]=0;
		gong[x+1][y]=0;
		gong[x+1][y+1]=0;
		if(lie[hang] && xie1[k+hang] && xie2[k-hang+n-1]){
			gong[k][hang]=1;//放上皇后，置值为1 
			
			lie[hang]=0;//该列都不能再放皇后,置值为0
			xie1[k+hang]=0;//该位置正对角线上不能再放皇后，置值为0
			xie2[k-hang+n-1]=0;//该位置负对角线上不能再放皇后，置值为0
			if(k==n-1) {//是否执行到第n-1行，是则结果+1，否则执行else 
				sum++;
			}else {//试探走不通则回溯 
				HuangHou(k+1,n,x,y);//递归调用，参数递增 
			}
			gong[k][hang]=0;//拿掉皇后，置值为0 
			xie1[k+hang]=1;//正对角线上恢复初始值 
			xie2[k-hang+n-1]=1;//负对角线上恢复初始值 
			lie[hang]=1;//该列恢复初始值
		}
	}
}
int main(){
	memset(lie,1,sizeof(lie));//给数组赋初值
	memset(xie1,1,sizeof(xie1));
	memset(xie2,1,sizeof(xie2));
	int n,x,y;//定义棋盘规模、皇上位置坐标 
	scanf("%d%d%d",&n,&x,&y);
	HuangHou(0,n,x-1,y-1);
	printf("%d",sum);
	return 0;
}            
