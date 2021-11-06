#include<stdio.h>
main(){
	int a=0,s=0;
	for(int i=1;i<=100;i++){
		a = a+i;
		s=s+a;
	}
	printf("%d",s);
}
