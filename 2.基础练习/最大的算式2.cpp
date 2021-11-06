#include <stdio.h> 
int a[100],c[100]={0};
int N,K;
long long b[100][100]={0};
/*从begin到end的整数的和*/
long long g(int begin,int end){
	int i;
	long long sum=0;
	for(i=begin;i<=end;i++){
		sum+=a[i];
	}
	return sum;
}
long long f(int begin,int k){
	int i;
	long long t;
	long long answer=0;
	if(b[begin][k]==1) 
		return b[begin][k];
	if(k==0)
		return g(begin,N-1);
	if(begin==N-1 && k==1) 
		return 0;
	for(i=begin+1;i<=N-1;i++){
		if(answer<(t=(g(begin,i-1)*f(i,k-1)))){
			answer = t;
		}
	}
	return b[begin][k]=answer;
}
 
main(){
	scanf("%d%d",&N,&K);
	for(int i=0;i<N;i++){
		scanf("%d",&a[i]);
	}
	printf("%lld",f(0,K));
}
