#include<stdio.h>
#include<string.h> 
#include<math.h>
#define max 15
int n,x,y;
int qipan[max][max];//表棋盘，1表示不能放皇后，0表示能放
int lie[max];//代表一竖n行 
int xie1[max];//代表从↖到↘对角线
int xie2[max];//代表从↘到↖对角线
int sum=0;//表共有多少种放法即结果 
void HuangHou(int i){
	for(int j=1;j<=n;j++){//表每次搜索都是从第一列开始的 
		if(qipan[i][j]==1 || lie[j]==1 || xie1[i+j-1]==1 || xie2[i-j+n]==1){
			continue;
		}
//		else{
			lie[j]=1;
			xie1[i+j-1]=1;
			xie2[i-j+n]=1;
			if(i==n){//表示搜索到了第n行,说明此次为有效搜索 
				sum++;
			}else{
				HuangHou(i+1);//搜索下一行 
			}
			lie[j]=0;
			xie1[i+j-1]=0;
			xie2[i-j+n]=0;
//		} 
	}
}
int main(){
	scanf("%d%d%d",&n,&x,&y);//qipan[x][y]是皇上 
	qipan[x][y]=1;//皇上及其周围共9个位置不能放皇后,设置为1 
	qipan[x-1][y-1]=1;
	qipan[x-1][y]=1;
	qipan[x-1][y+1]=1;
	qipan[x][y-1]=1;
	qipan[x][y+1]=1;
	qipan[x+1][y-1]=1;
	qipan[x+1][y]=1;
	qipan[x+1][y+1]=1;
	HuangHou(1);//从第一行开始搜索,n表示棋盘规模 
	printf("%d",sum);
	return 0;
}            

