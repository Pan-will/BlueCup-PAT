#include<stdio.h>
long long int Fibonacci(long long int n){
	long long int i;
    long long int f1,f2,f;
    f1=f2=1;
    if(n<=2){
    	f=1;
    }else
        for(i=3;i<=n;i++){
	        f=f1+f2;
	        f1=f2;
	        f2=f;
        }
    return f;
}
long long int Fibonacci2(long long int n){
	if(n<=0){
		return 0;
	}
	else if(n==1 || n==2){
		return 1;
	}
	else{
		return Fibonacci2(n-1)+Fibonacci2(n-2);
	}
}
main(){
	long long int n,m,p,i;
	long long int sum=0;
	scanf("%lld %lld %lld",&n,&m,&p);
	for(i=1;i<=n;i++){
		sum+=Fibonacci(i);
	}
	long long int modM = sum%Fibonacci(m);
	printf("%lld",modM%p);
}
