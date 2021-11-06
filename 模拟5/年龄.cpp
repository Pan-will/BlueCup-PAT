/*16	61*/
#include<stdio.h>
#include<stdlib.h>
int main(){
	int a,b,c;
	int x,y;
	for(int i=10;i<100;i++) {
		a = i/10%10;//Ê®
		b = i/1%10;//¸ö 
		c = b*10+a;
		x = i+c;
		y = abs(c-i);
		if(x==y+32){
			printf("%d ",i);
		}
	}
	return 0;
}
