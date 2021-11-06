#include<stdio.h>
void convert(int a,int b){
	int c=a/b,r=a%b;
	if(c==0){
		printf("%d",r);
		return;
	}else {
		convert(c,b);
		printf("%d",r);
	}
} 
main(){
	int a,b;
	scanf("%d %d",&a,&b);//十进制a转成b进制输出 
	convert(a,b);
}
