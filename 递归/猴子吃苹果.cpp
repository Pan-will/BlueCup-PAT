/*
	2046
*/
#include<stdio.h>
int f(int i){
	if(i=10)
		return 1;
	else
		return 2*(f(i+1)+1);
}
int main(){
	printf("%d",f(1));
	return 0;
}
