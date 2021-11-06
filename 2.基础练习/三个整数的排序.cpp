#include<stdio.h>
int main(){
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a<b){
		int flag = a;
		a = b;
		b = flag;
	}
	if(a<c){
		int flag = a;
		a = c;
		c = flag;
	}
	if(b<c){
		int flag = b;
		b = c;
		c = flag;
	}
	printf("%d %d %d",a,b,c);
}
