#include<stdio.h>
long long A(long long n){
	if(n<10){//�ݹ���� 
		return n;
	}else{
		long long JI=1;
		while(n!=0){
			if(n%10!=0){//�����ܱ�10������ȡ�����˵�������Ҷ�n���г���10���� 
				JI*=n%10;
				n/=10;
			}else//���ܱ�10�������������䣬���Խ��г���10���� 
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
