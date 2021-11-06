#include<stdio.h>
#include<math.h>
int IsPrime(int n){
	int k=sqrt(n+1);
	for(int i=2;i<=k;i++){
		if(n%i==0){
			printf("no");
			return 0;
		}
	}
	printf("yes");
}
int main(){
	int n;
	scanf("%d",&n);
	IsPrime(n);
}
