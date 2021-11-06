#include<stdio.h>
long long fibonacci(long long n)  
{  
    long long result=1; 
    long long f1=1,f2;
    while(n>2){
        n--;
        f2=f1;
        f1=result;
        result=f1+f2;
    }  
    return result;
} 
main(){
	long long n;
    long long f1,f2,f;
    scanf("%lld",&n);
    printf("%lld",fibonacci(n)%10007);
}
