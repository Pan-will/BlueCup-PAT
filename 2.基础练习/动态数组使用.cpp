#include<stdio.h>
int addAll(int a[],int N){
	int sum=0;
	for(int i=0;i<N;i++){
		sum += a[i];
	}
	return sum;
}
float aveFun(int sum,int N){
	return sum/N;
}
int main(){
	int N;
	int sum=0;
	float ave=0;
	scanf("%d",&N);
	int a[N];
	for(int i=0;i<N;i++){
		scanf("%d",&a[i]);
	}
	sum = addAll(a,N);//求和 
	ave = aveFun(sum,N);//求平均数 
	printf("%d %.2f",sum,ave);
}

