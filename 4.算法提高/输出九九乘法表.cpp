#include<stdio.h>
int main(){
	printf("Nine-by-nine Multiplication Table\n");
	for(int i=0;i<40;i++){
		printf("-");
	}
	printf("\n");
	printf("      1   2   3   4   5   6   7   8   9\n");
	for(int i=0;i<40;i++){
		printf("-");
	}
	printf("\n");
	
	int i,j,n;
	
    for(i=1;i<=9;i++){
    	printf("%d  ",i);
        for(j=1;j<=i;j++)
            printf("  %2d",i*j);
        printf("\n");
    }
    for(int i=0;i<40;i++){
		printf("-");
	}
	printf("\n");
}
