#include<stdio.h> 
int f(int n){
	if(n==0){
		return n;
	}else{
		return f(n-1)+n;
	}
}
int main(){
	printf("%d",f(3));
	return 0;
}
