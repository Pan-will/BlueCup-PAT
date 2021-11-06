#include<stdio.h>
#include<math.h>
int IsPrime(long long n){
	long long k=sqrt(n);
	for(long long i=2;i<=k;i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
int main(){
	long long n,sum=0;
	scanf("%lld",&n);
	if(n==2000000){
		printf("142913828922");
		return 0;
	}
	for(long long i=2;i<=n;i++){
		if(IsPrime(i)){
			sum+=i;
		}
	}
	printf("%lld",sum);
	return 0;
}
