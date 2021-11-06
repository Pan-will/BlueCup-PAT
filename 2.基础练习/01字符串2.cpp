#include<stdio.h>
int main(){
	int i,j;
	int time;//循环次数 
	int f[5]={0};//定义一个五位数组，初始值赋0 
	printf("00000\n");
	for(time=1;time<=31;time++){//循环31次 
		i=0;
		f[i]=f[i]+1;
		while(f[i]>=2){//像二进制一样处理进位 
			int temp=f[i]/2;
			f[i]=f[i]%2;
			i++;
			f[i]=f[i]+temp;
		}
		for(j=4;j>=0;j--){
			printf("%d",f[j]);
		}
		printf("\n");
	}
}
