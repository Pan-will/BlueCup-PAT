#include<stdio.h>
int main(){
	int m,n;
	int sum=0;
	scanf("%d%d",&m,&n);
	if(m<n) return 0;
	if(n==0){
		printf("1");
		return 0;
	}
	if(m>n){
		int k = m; 
		for(int i=1;i<=n;i++){
			sum = sum + k;
			k--;
		}
		printf("%d",sum);
	}
}
