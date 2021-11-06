#include<stdio.h> 
main(){
	int y;
	scanf("%d",&y);
	if(y%400==0 || (y%4==0 && y%100!=0)){
		printf("true");
	}else{
		printf("false");
	}
}
