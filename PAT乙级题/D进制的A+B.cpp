#include<stdio.h>
void jinzhi(int a,int b){
	int c = a/b, r = a%b;
	if(c == 0){
		printf("%d",r);
		return;
	}else{
		jinzhi(c,b);
		printf("%d",r);
	}
}
int main(){
	int a,b,d;
	scanf("%d %d %d",&a,&b,&d);
	jinzhi(a+b,d);
	return 0;
}
