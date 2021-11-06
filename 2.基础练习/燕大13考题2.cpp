#include<stdio.h> 
int main(){
	int i=5,s=0;
	do{
		if(i%2){
			printf("if:%d | %d\n",i,s);
			continue;
		}
		else{
			printf("else:%d | %d\n",i,s);
			s+=i;
			printf("else:%d\n",s);
		}
	}while(--i);
	printf("\n%d",s);
	return 0;
}
