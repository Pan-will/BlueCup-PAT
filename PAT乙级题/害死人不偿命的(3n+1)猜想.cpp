#include<stdio.h> 
int main(){
	int n;//0<=n<=1000
	int step=0;//��¼����,��ֵΪ0
	scanf("%d",&n);
	while(n!=1){
		if(n%2==0){
			n = n/2;
			step++;
			continue;
		}else{
			n = (3*n + 1)/2;
			step++;
			continue;
		}
	}
	printf("%d",step);
}
