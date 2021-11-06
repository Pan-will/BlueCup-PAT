#include<stdio.h> 
#include<math.h>
int main(){
	int n,i,j;
	int count=0,sum=1;
	scanf("%d",&n);
	/*
	首先进行开平方保证时间;
	二是求素数，一般的求出来的素数是和比自己小的求模;
	这里多加了一个判断，如果可以除尽，那么不是素数。 
	*/
	for(i=2;i<=sqrt(100000);i++){
		for(j=2;j<i;j++){
			if(i%j == 0) break;
			else if(j>=i){
				count++;
				sum *= i;
				if(count==n) break;
			}
		}
	}
	printf("%d",sum%50000);
	return 0;
}
