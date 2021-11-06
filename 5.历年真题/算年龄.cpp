/*1806*/ 
#include<stdio.h>
int main(){
	int flag;
	for(int i=10;i<100;i++){
		flag=i*i-i;
		if(flag>1800 && flag<1850)
			printf("%d\n",flag);
	}
	return 0;
}
