/*对于给定整数数组a[],寻找其中最大值，并返回下标*/ 
#include<stdio.h>
int main()
{
	int i,j,N;
	int sum = 0,max = 0; 
	scanf("%d",&N);
	int a[N];
	for(i=0; i<N; i++){
		scanf("%d", &a[i]);
		if(a[i]>max){
			max = a[i];
			sum = i;
		}
	}
	printf("%d %d",N,sum);
} 
