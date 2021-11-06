#include<stdio.h>
int main(){
	int n;
	int maxlen=0;
	int sum;
	scanf("%d",&n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	/*算出序列中第i个到第j个数的和(j>=i)，并进行比较*/
	for(int i=0;i<n;i++){
		for(int j=i;j<n;j++){
			sum = 0;//每次循环将和清0 
			for(int k=i;k<=j;k++){
				sum+=a[k];//第i个到第j个数的和
			}
			if(sum>maxlen){
				maxlen = sum;
			}
		}
	}
	printf("%d",maxlen);
	return 0;
}
