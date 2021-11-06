#include<stdio.h>
int main(){
	printf("Calendar 2012-03\n");
	for(int i=0;i<26;i++){
		printf("-");
	}
	printf("\n");
	printf(" Su  Mo  Tu  We  Th  Fr  Sa\n");
	for(int i=0;i<26;i++){
		printf("-");
	}
	printf("\n");
	for(int i=0;i<20;i++){
		printf(" ");
	}
	printf("%3d %3d\n",1,2);
	int num;
	
    for(int i=3;i<=31;i++){
    	printf("%3d ",i);
    	num++;
    	if(num%7==0){
    		printf("\n");
		}
    }
    printf("\n");
    for(int i=0;i<26;i++){
		printf("-");
	}
	printf("\n");
}
