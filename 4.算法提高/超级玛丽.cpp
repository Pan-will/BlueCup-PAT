/*
思路：
	设temp处有陷阱，且temp-1米处的方法数为：b[temp-1]，则b[temp+1]=b[temp-1],且到temp+2处的方法数也为b[temp-1]，即：b[temp+1]=b[temp-1]=b[temp+2].
综上b[i]=b[i-1]+b[i-2];
	由题意知b[1]=b[2]=1;
	设有陷阱的i米处的方法数为b[i]=0。 
*/
#include<stdio.h> 
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int b[n], xianjing[m];//b[i]表示到第i米处的方法数
	for(int i=0;i<=n;i++){//先将b赋初值
		b[i]=1;
	}
	int flag=0;//标记是否有相邻的陷阱 
	for(int i=0;i<m;i++){
		scanf("%d",&xianjing[i]);
		b[xianjing[i]] = 0;//有陷阱的位置方法数为0
		if(i>1)
			if(xianjing[i]-xianjing[i-1]==1 || xianjing[i]-xianjing[i-1]==-1)
				flag=1;
	}
	if(flag==1)//若有相邻的陷阱,必死无疑 
		printf("0");
	else{
		for(int i=3;i<=n;i++){
			if(b[i]==0)
				continue;
			else
				b[i]=b[i-1]+b[i-2];
		}
		printf("%d",b[n]);
	}
	return 0;
}
