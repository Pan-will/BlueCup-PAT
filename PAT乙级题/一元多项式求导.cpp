#include<stdio.h>
main(){
	int a,b;
	int flag=0;//±ê¼Ç 
	while(scanf("%d %d",&a,&b) != EOF){
		if(a*b != 0){
			if(flag == 1)
				printf(" ");
			else
				flag = 1;
			printf("%d %d",a*b,b-1);
		}
	}
	if(flag == 0)
		printf("0 0");
}
