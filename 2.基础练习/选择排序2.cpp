#include<stdio.h>  
void SelectSort(int a[],int s,int n){  
    if(s+1>n) return;//递归的出口   
    else{  
        int temp,i,min;  
        min=s;  
        for(i=s+1;i<n;i++){  
        	if(a[min]>a[i])  
            	min=i;  
        }  
        printf("swap(a[%d], a[%d]):",s,min);  
        temp=a[s];
        a[s]=a[min];  
        a[min]=temp;  
        for(i=0;i<n-1;i++)
			printf("%d ",a[i]);
        printf("%d\n",a[n-1]);
        SelectSort(a,s+1,n);//递归找下个   
    }  
}  
int main(){  
    int n,a[200],i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
		scanf("%d",&a[i]);
    SelectSort(a,0,n);  
    return 0;  
} 
