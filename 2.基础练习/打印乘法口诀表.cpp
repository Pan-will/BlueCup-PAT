#include<stdio.h>
int main(){
	int i,j,n;
	printf("\n");
    for(i=1;i<=9;i++){
        for(j=1;j<=i;j++)
            printf("%d*%d=%2d  ",i,j,i*j);
        printf("\n");
    }
    
    printf("\n\n");
	
    for(i=1;i<=9;i++){
        // 将下面的for循环注释掉，就输出左下三角形
        for(n=1; n<=9-i; n++)
            printf("        ");
        for(j=1;j<=i;j++)
            printf("%d*%d=%2d  ",i,j,i*j);
        
        printf("\n");
    }
}
