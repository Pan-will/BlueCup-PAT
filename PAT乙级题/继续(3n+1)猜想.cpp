#include<stdio.h> 
int main(){
	int n;//0<=n<=1000
	int step=0;//记录次数,初值为0
	scanf("%d",&n);
	int num[9999];
	int item=0;
	while(n!=1){
		for(int i=0;i<9999;i++){
			if(n==num[i]){
				printf("%d",num[i]);
				return 0;
			}
		}
		if(n%2==0){
			n = n/2;
			step++;
		}else{
			n = (3*n + 1)/2;
			step++;
		}
		num[item++]=n;
	}
	printf("%d",step);
}
