#include<stdio.h> 
int main(){
	int m,Q;
	int a[2000];
	scanf("%d%d",&m,&Q);
	for(int i=0;i<m;i++){
		scanf("%d",&a[i]);
	}
	int rel[Q];//定义结果数组 
	int flag=0,q=Q;//定义标记 
	while(Q--){
		int low,high;//定义上下边界
		scanf("%d%d",&low,&high);
		int min=a[low];
		for(int i=low; i<=high; i++){
			if(a[i]<min){
				min=a[i];
			}
		}
		rel[flag++]=min;
	}
	for(int i=0;i<q;i++){
		printf("%d\n",rel[i]);
	}
}
