#include<stdio.h>
int main(){
	int n;
	int maxsum=0;
	int sum=0;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(int i=0;i<n;i++){
		sum+=a[i];
		if(sum>maxsum){
			maxsum = sum;
		}else{
			sum=0;
		}
	}
	printf("%d",maxsum);
	return 0;
}
