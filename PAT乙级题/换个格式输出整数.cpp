#include<stdio.h>
main(){
	int n;
	scanf("%d",&n);
	int baiwei = n/100%10;
	int shiwei = n/10%10;
	int gewei = n/1%10;
	for(int i=0;i<baiwei;i++) printf("B");
	for(int i=0;i<shiwei;i++) printf("S");
	for(int i=1;i<=gewei;i++) printf("%d",i);
}
