/*1673859*/
#include<stdio.h>
#define N 999999999
float sum=0,i;
int main(){
	for(i=1;i<=N;++i){
		sum+=1/i;
		if(sum>=15.0) break;
	}
	printf("%f",i);
	return 0; 
}
