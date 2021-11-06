#include<stdio.h>
void show_shalou(int h,char ch){//´òÓ¡É³Â© 
	int i,j,k;
    for(i=1;i<=h;i++){
        for(j=1;j<i;j++)
            printf(" ");
        for(k=1;k<=2*h+1-2*i;k++)
            printf("%c",ch);
    	printf("\n");
    }
    for(i=2;i<=h;i++){
        for(j=1;j<=h-i;j++)
            printf(" ");
        for(k=1;k<=2*i-1;k++)
            printf("%c",ch);
        printf("\n");
	}
}

int main(){
	char ch;
	int n;
	scanf("%d %c",&n,&ch);
	int row = 0;
	for(int i=0;i<n;i++){
        if((2*i*(i + 2) + 1) > n){
            row = i-1;
            break;
        }
    }
	show_shalou(row+1,ch);
	printf("%d",n-(2 * row * (row + 2) + 1));
	return 0;
}
