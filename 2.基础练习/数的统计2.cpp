#include "stdio.h"  
int find(int *arr,int l,int n)                            //���س��ִ����ĺ���  
{  
    int i=0,k=0;  
    for(i=0;i<l;i++)  
    if(arr[i]==n) k++;  
    return k;  
}  
/*ð������*/ 
void sort(int *p,int n)                                    //������  
{  
    int q,i,j;  
    for(j=0;j<n;j++)  
    for(i=0;i<n-j-1;i++)  
        if(*(p+i)>*(p+1+i)){  
            q=*(p+i);  
            *(p+i)=*(p+i+1);  
            *(p+i+1)=q;  
            }  
}  
int main()  
{  
    int n,i,j,a[1000];  
    scanf("%d",&n);  
    for(i=0;i<n;i++)  
    scanf("%d",&a[i]);  
    sort(a,n);  
    printf("%d %d\n",a[0],find(a,n,a[0]));            //������λ�������  
    for(i=1;i<n;i++)  
        if(a[i]!=a[i-1])                          //һ�����ּ�����ִ���ֻ�����һ��  
        printf("%d %d\n",a[i],find(a,n,a[i]));  
    return 0;  
}
