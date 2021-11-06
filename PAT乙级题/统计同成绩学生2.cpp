#include<stdio.h> 
int main(){
	int n,score,k,check,num[101]={0};
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&score);
		num[score] += 1;
	}
	scanf("%d",&k);
	for(int i=0;i<k;i++){
		scanf("%d",&check);
		if(i == k-1)
			printf("%d",num[check]);
		else
			printf("%d ",num[check]);
	}
	return 0;
}
