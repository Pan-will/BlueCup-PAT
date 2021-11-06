#include<stdio.h>
void CompactIntegers(int a[],int N){
	int j=0;
	for(int i=0;i<N;i++){
		if(a[i]!=0){
			a[j]=a[i];
			j++;
		}
	}
	for(int i=0;i<j;i++){
		printf("%d ",a[i]);
	}
	printf("\n%d",j);
}
int main(){
	int N;
	scanf("%d",&N);
	int a[N];//定义长度为N的一维数组 
	//输入数组 
	for(int i=0; i<N; i++){//录入数组a 
		scanf("%d",&a[i]);
	}
	CompactIntegers(a,N);
}
