#include<stdio.h>
long long A(long long n){
	if(n<10){//递归出口 
		return n;
	}else{
		long long JI=1;
		while(n!=0){
			if(n%10!=0){//若不能被10整除，取余数乘到结果中且对n进行除以10运算 
				JI*=n%10;
				n/=10;
			}else//若能被10整除，则结果不变，所以进行除以10运算 
				n/=10;
		}
		return A(JI);
	}
}
main(){
	long long x;
	scanf("%lld",&x);
	printf("%lld",A(x));
}
