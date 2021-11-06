/*
1988 
*/
#include<stdio.h>
#include<math.h>
int main(){
	int y;
	for(y=1930;y<2014;y++){
		int a=y/1000%10;
		int b=y/100%10;
		int c=y/10%10;
		int d=y%10;
		if(a+b+c+d==2014-y){
			printf("%d\n",y);
		}
	}
	return 0;
}
