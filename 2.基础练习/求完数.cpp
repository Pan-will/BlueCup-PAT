/*
	完全数:比自身小的约数的和等于自身。 
*/
#include<stdio.h>
int main(){
	int m,i,k;
	for(i=1;i<10000;i++){
		int sum=0;//每次循环都重新计算sum 
		for(k=1;k<i;k++) {
			if(i%k==0)
				sum+=k;
		}
		if(sum==i){
			printf("%d\n",i);
		}
	}
}
