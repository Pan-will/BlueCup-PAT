#include "stdio.h"
int main(){
    int i,j,k;
    for(i=1;i<=5;i++){
        for(j=1;j<i;j++)
            printf(" ");
        for(k=1;k<=11-2*i;k++)
            printf("*");
    	printf("\n");
    }
    for(i=2;i<=5;i++){
        for(j=1;j<=5-i;j++)
            printf(" ");
        for(k=1;k<=2*i-1;k++)
            printf("*");
        printf("\n");
	}
	printf("\n\n");
	for(i=0;i<=5;i++){
		for(j=1;j<=5-i;j++)
			printf("*");
		for(k=1;k<=2*i-1;k++)
			printf(" ");
		printf("\n");
	}

	for(i=1;i<=5;i++) {
		for(j=0;j<i;j++)
			printf("*");
		for(k=0;k<=11-2*i;k++)
			printf(" ");
		printf("\n");
	}
}
