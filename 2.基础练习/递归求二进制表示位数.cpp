#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(){ 
	int i;
	scanf("%d",&i);
	char a[100];
	itoa(i,a,2);
	printf("%d",strlen(a));
	return 0; 
}
