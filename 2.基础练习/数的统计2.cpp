#include "stdio.h"  
int find(int *arr,int l,int n)                            //返回出现次数的函数  
{  
    int i=0,k=0;  
    for(i=0;i<l;i++)  
    if(arr[i]==n) k++;  
    return k;  
}  
/*冒泡升序*/ 
void sort(int *p,int n)                                    //排序函数  
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
    printf("%d %d\n",a[0],find(a,n,a[0]));            //数组首位单独输出  
    for(i=1;i<n;i++)  
        if(a[i]!=a[i-1])                          //一个数字及其出现次数只需输出一次  
        printf("%d %d\n",a[i],find(a,n,a[i]));  
    return 0;  
}
