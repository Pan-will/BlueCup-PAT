#include<stdio.h> 
#include<math.h>
int main(){
	int m,i,k,h=0,leap=1;
	for(m=1;m<=200;m++){
		k=sqrt(m+1);//只是用来确定循环次数的 
		for(i=2;i<=k;i++)
			if(m%i == 0){
				leap=0;
				break;
			}
		if(leap==1){ //可以省略写为：if(leap)
			printf("%d\t",m);
			h++;//记录输出个数 
			if(h%10 == 0)
				printf("\n");//一行输出10个数 
		}
		leap = 1;
	}
	printf("\n\nThe Total is %d",h);
}
