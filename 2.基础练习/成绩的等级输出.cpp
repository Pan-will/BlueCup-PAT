#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	if(t>=90 && t<100){
		printf("A");
	}
	else if(t>=80 && t<90){
		printf("B");
	}
	else if(t>=70 && t<80){
		printf("C");
	}
	else if(t>=60 && t<70){
		printf("D");
	}
	else if(t>=0 && t<60){
		printf("E");
	}
}
