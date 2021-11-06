#include<stdio.h>
int main(){
	int i,j,k;
	printf("打印沙漏：\n\n");
	for(i=1;i<=5;i++){
		for(j=1;j<i;j++)
			printf(" ");
		for(k=1;k<=11-2*i;k++)
			printf("*");
		printf("\n");
	}
	for(i=2;i<=5;i++){
		for(j=0;j<5-i;j++)
			printf(" ");
		for(k=0;k<2*i-1;k++)
			printf("*");
		printf("\n");
	}
	printf("\n\n正三角形：\n\n");
	for(i=1;i<=8;i++){
		for(j=0;j<8-i;j++)
			printf(" ");
		for(k=0;k<2*i-1;k++)
			printf("*");
		printf("\n");
	}
	printf("\n\n菱形：\n\n");
	for(int m=1;m<=2;m++){
		for(i=1;i<=8;i++){
			for(j=0;j<8-i;j++)
				printf(" ");
			for(k=0;k<2*i-1;k++)
				printf("*");
			printf("\n");
		}
		for(i=1;i<=8;i++){
			for(j=1;j<i;j++)
				printf(" ");
			for(k=1;k<=17-2*i;k++)
				printf("*");
			printf("\n");
		} 
	}
	
	printf("\n\n打印不缩进的沙漏：\n\n");
	
	for(i=0;i<=6;i++){
		for(j=0;j<6-i;j++)
			printf("*");
		for(k=0;k<2*i-1;k++)
			printf(" ");
		printf("\n"); 
	}
	for(i=2;i<=6;i++) {
		for(j=0;j<i;j++)
			printf("*");
		for(k=0;k<13-2*i;k++)
			printf(" ");
		printf("\n");
	}
	
}
