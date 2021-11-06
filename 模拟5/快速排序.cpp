/*swap(a,start,j);*/
#include <stdio.h>
void swap(int a[], int i, int j){
	int t = a[i];
	a[i] = a[j];
	a[j] = t;
}

int partition(int a[], int start, int end){
    int i = start;
    int j = end + 1;
    int x = a[start];
    while(1){
        while(i<end && a[++i]<x);
        while(a[--j]>x);
        if(i>=j)
			break;
        swap(a,i,j);
    }
	swap(a,start,j);
    return j;
}

void quicksort(int a[], int start, int end)//int start\end 
{
    if(start<end){
        int q = partition(a,start,end);
        quicksort(a,start,q-1);//递归左边子区间 
        quicksort(a,q+1,end);//递归右边子区间 
    }
}
    
int main(){
	int i;
	int a[] = {5,13,6,24,2,8,19,27,6,12,1,17};
	int N = 12;
	quicksort(a, 0, N-1);
	for(i=0; i<N; i++)
		printf("%d ", a[i]);
	printf("\n");
	return 0;
}
