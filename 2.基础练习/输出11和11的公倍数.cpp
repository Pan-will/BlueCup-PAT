/*最小公倍数=两整数的乘积 ÷最大公约数*/
#include<stdio.h> 
int main(){
	int c=11*17;
	for(int i=1;i<1000;i++){
		if(i%c==0){
			printf("%d\n",i);
		}
	}
} 
