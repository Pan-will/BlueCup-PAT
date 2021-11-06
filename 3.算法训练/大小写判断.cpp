//65-90ด๓ะด		97-122ะกะด 
#include<stdio.h>
int main(){
	char c;
	scanf("%c",&c);
	if(c>=65 && c<=90){
		printf("upper");
	}else if(c>=97 && c<=122){
		printf("lower");
	}
	return 0;
}
