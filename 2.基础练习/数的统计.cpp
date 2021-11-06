#include<stdio.h>
/*统计数组中某元素出现的次数*/
int find(int *arr,int l,int n)                            //返回出现次数的函数  
{  
    int i=0,k=0;  
    for(i=0;i<l;i++)  
    if(arr[i]==n) k++;  
    return k;  
}
int main(){
	int n;
	scanf("%d",&n);
	int a[n];
	int num[n][2]={0};
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	/*冒泡升序*/
	for(int i=0; i<n-1; i++){
		for(int j=0; j<n-1-i; j++){
			if(a[j]>a[j+1]){
				int t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			}
		}
	}
	/*输出排序后的数组*/
//	for(int i=0; i<n; i++){
//		printf("%d ", a[i]);
//	}
//	printf("\n");
	printf("%d %d\n",a[0],find(a,n,a[0]));            //数组首位单独输出  
    for(int i=1;i<n;i++)  
        if(a[i]!=a[i-1])                          //一个数字及其出现次数只需输出一次  
        printf("%d %d\n",a[i],find(a,n,a[i]));  
    return 0;  
}
