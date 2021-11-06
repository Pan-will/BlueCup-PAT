#include<stdio.h> 
main(){
	int n,x=1;
	scanf("%d",&n);
	bool flag=true;
	while(n!=1){
		x++;
		while(n%x==0){
			n/=x;
			if(flag){
				flag=false;
				printf("%d",x);
			}else{
				printf("*%d",x);
			}
		}
	}
}
