#include<stdio.h> 
#include<string.h>
int zhongjiang(int piao,int jiang[]){//返回num表该彩票中了几等奖 
	int flag=0;
	for(int i=0;i<7;i++){
		if(piao==jiang[i]){
			flag=1;
		}
	}
	return flag;
}
int main(){
	int jiang[7]={0};//放中奖的七个号码
	int n;//表彩票数量
	scanf("%d",&n);
	int piao[7]={0};//表每张彩票的七个数字
	int ok[7]={0};//表7个中奖数字的出现次数,最后遍历输出 
	getchar();//处理回车 
	for(int i=0;i<7;i++){//七个中奖数字 
		scanf("%d",&jiang[i]);
	}
	for(int i=0;i<n;i++){//卡循环次数 
		for(int j=0;j<7;j++){//卡每行输入7个数,表一张彩票 
			scanf("%d",&piao[j]);
		}
		int num=0;//表每张彩票上中奖号码的个数 
		for(int k=0;k<7;k++){
			if(zhongjiang(piao[k],jiang)){
				num++;
			}
		}
		if(num==0){
			continue;
		}else if(num==7){
			ok[0]++;
		}else if(num==6){
			ok[1]++;
		}else if(num==5){
			ok[2]++;
		}else if(num==4){
			ok[3]++;
		}else if(num==3){
			ok[4]++;
		}else if(num==2){
			ok[5]++;
		}else if(num==1){
			ok[6]++;
		}
	}
	for(int i=0;i<7;i++){
		printf("%d ",ok[i]);
	}
	return 0;
}
