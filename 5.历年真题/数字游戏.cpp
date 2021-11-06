#include<stdio.h>
int main(){
	long long n,k,t;
	long long sum=1;
	long long d=1;
	scanf("%lld%lld%lld",&n,&k,&t);
	long long dis = n*(n+1)/2;
	for(long long i=1;i<t;i++){
		d += dis;
		dis += n*n;
		if(d>=k-1)
			d%=k;
		sum+=d;
	}
	printf("%lld",sum);
	return 0;
}
