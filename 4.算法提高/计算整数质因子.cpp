#include<stdio.h> 
int is_prime(int n){//�ж��Ƿ�Ϊ�������Ƿ���1�����򷵻�0 
	for(int i=2;i<n;i++){
		if(n%i==0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int n;
	scanf("%d",&n);
	for(int i=2;i<n;i++){
		if(n%i==0 && is_prime(i)==1)
			printf("%d ",i);
	}
	return 0;
}
