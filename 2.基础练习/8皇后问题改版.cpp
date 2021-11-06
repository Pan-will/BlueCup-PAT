/*
测试数据： 
1 2 3 4 5 6 7 8
9 10 11 12 13 14 15 16
17 18 19 20 21 22 23 24
25 26 27 28 29 30 31 32
33 34 35 36 37 38 39 40
41 42 43 44 45 46 47 48
48 50 51 52 53 54 55 56
57 58 59 60 61 62 63 64
*/
#include<stdio.h>
int max=0,sum;//max表预设一个最大值,sum表所放皇后的位置的元素和
int lie[9];//代表一竖n行
int xie1[2*8];//代表从↖到↘对角线
int xie2[2*8];//代表从↘到↖对角线
int qipan[9][9];//棋盘权值
int ans=0;
void HuangHou(int begin,int sum){
	if(begin>8){//表示搜索到了第八行,说明此次为有效搜索 
		if(sum>max){
			max = sum;//max用来存放最大值 
		}
		ans++;
	}else{
		for(int i=1;i<=8;i++){//表每次搜索都是从第一列开始的 
			if(lie[i]==0 && xie1[begin+i-1]==0 && xie2[begin-i+8]==0){
				lie[i]=1;
				xie1[begin+i-1]=1;
				xie2[begin-i+8]=1;
				HuangHou(begin+1,sum+qipan[begin][i]);//搜索下一行 
				lie[i]=0;
				xie1[begin+i-1]=0;
				xie2[begin-i+8]=0;
			}
		}
	} 
}
int main(){
	for(int i=1;i<=8;i++){//录入棋盘 
		for(int j=1;j<=8;j++){
			scanf("%d",&qipan[i][j]);
		}
	}
	HuangHou(1,0);//从第一行开始搜索 
	printf("总方案数：%d\n格子值最大的：%d",ans,max);
	return 0;
}            

