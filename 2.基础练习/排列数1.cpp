#include<stdio.h>
int main(){
	long a = 123456789;
	int n;
	scanf("%d",&n);
	if(n==1){
		printf("0123456789\n");
	}else{
		int i=1;
		while(i<n){
			a++;
			i++;
		}
		printf("%ld",a);
	}
	
}
