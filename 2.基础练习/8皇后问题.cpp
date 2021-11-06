#include<stdio.h>
int sum=0;//表共有多少种放法即结果 
int lie[8];//代表一竖n行 
int xie1[2*8];//代表从↖到↘对角线
int xie2[2*8];//代表从↘到↖对角线

void HuangHou(int begin){
	if(begin>8){//表示搜索到了第八行,说明此次为有效搜索 
		sum++;
	}else{
		for(int i=1;i<=8;i++){//表每次搜索都是从第一列开始的 
			if(lie[i]==0 && xie1[begin+i-1]==0 && xie2[begin-i+8]==0){
				lie[i]=1;
				xie1[begin+i-1]=1;
				xie2[begin-i+8]=1;
				HuangHou(begin+1);//搜索下一行 
				lie[i]=0;
				xie1[begin+i-1]=0;
				xie2[begin-i+8]=0;
			}
		}
	} 
}
int main(){
	HuangHou(1);//从第一行开始搜索 
	printf("%d",sum);
	return 0;
}            

