#include "stdio.h"  
int main(){
int SIZE;
printf("������SIZE:");
scanf("%d",&SIZE);
int a[SIZE];  
int i,j;
printf("������%d���������ÿո������", SIZE);
for(i=0;i<SIZE;i++) {
    scanf("%d",&a[i]);
}  
for(i=0;i<SIZE-1;i++)  
    for(j=0;j<SIZE-1-i;j++)
        if(a[j]>a[j+1]){  
            int t;  
            t=a[j];  
            a[j]=a[j+1];  
            a[j+1]=t;  
        }  
printf("\n");
for(i=0;i<SIZE;i++){  
    printf("�������У�%d  ",a[i]);  
}
printf("\n");  
}
