#include<stdio.h> 
void ass(int number){
	char n[100][100]={"zero","one","two","three","four","five","six","seven","eight","nine","ten","eleven","twelve","thirteen","fourteen","fifteen","sixteen","seventeen","eighteen","nineteen","twenty",
	"thirty","forty","fifty"};
	int a=number/10;
	int b=number%10;
	if(number<=20){
		printf("%s",n[number]);
	}else{
		if(b!=0){
			printf(" %s",n[b]);
		}
		printf("%s",n[number+18]);
	}
}
void time_ass(int hour,int minu){
	if(minu==0){//整点 
		ass(hour);
		printf(" o'clock");
	}else{//非整点 
		ass(hour);
		printf(" ");
		ass(minu);
	}
}
int main(){
	int h,m;
	scanf("%d%d",&h,&m);
	time_ass(h,m);
	return 0;
}
