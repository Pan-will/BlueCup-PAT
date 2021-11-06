#include<stdio.h> 
int main(){
	int a,b,c,d;
	for(int i=1000; i<10000; i++){
		a = i / 1000 % 10;
		b = i / 100 % 10;
		c = i / 10 % 10;
		d = i / 1 % 10;
		if(a==d && b==c){
			printf("%d\n",i);
		}
	}
}
