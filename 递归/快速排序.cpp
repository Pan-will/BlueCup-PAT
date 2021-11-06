#include "stdio.h"  
  
void swap(int *a,int *b){/*序列中元素位置的交换*/  
  int tmp;  
  tmp = *a;  
  *a = *b;  
  *b = tmp;  
}  
void quicksort(int k[], int s,int t){/*快速排序*/  
    int i,j;  
    if(s<t){ 
        i = s;  
        j = t+1;  
        while(1){  
            do i++;  
            while(!(k[s]>=k[i] || i==t));/*重复执行i++操作*/  
            do j--;  
            while(!(k[s]<=k[j] || j==s));/*重复执行j--操作*/  
            if(i<j)  
                swap(&k[i],&k[j]);/*交换k[i]和k[j]的位置*/  
            else
                break;
  
        }  
        swap(&k[s],&k[j]);/*交换基准元素与k[j]的位置*/  
        quicksort(k,s,j-1);/*递归排序基准元素前面的子序列*/  
        quicksort(k,j+1,t);/*递归排序基准元素后面的子序列*/  
    }  
}  
  
int main(){
	int n;
	scanf("%d",&n);
	getchar();//处理此处的回车 
	int k[n];
	for(int i=0;i<n;i++){
		scanf("%d",&k[i]);
	}
    printf("原序：\t");
    for(int i=0;i<n;i++)
        printf("%d ",k[i]);
    quicksort(k,0,n-1);/*快速排序:0和n-1分别表示数组k的下标范围*/  
    printf("\n快速降序:");  
    for(int i=0;i<n;i++)
        printf("%d ",k[i]);  
    return 0; 
} 
