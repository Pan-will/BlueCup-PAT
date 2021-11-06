#include<stdio.h>
/*快速排序算法函数*/
int quicksort(vector<int> &v, int left, int right){
    if(left < right){
        int key = v[left];
        int low = left;
        int high = right;
        while(low < high){
            while(low < high && v[high] > key){
                high--;
            }
            v[low] = v[high];
            while(low < high && v[low] < key){
                low++;
            }
            v[high] = v[low];
        }
        v[low] = key;
        quicksort(v,left,low-1);
        quicksort(v,low+1,right);
    }
}
int main()
{
	int N;
	scanf("%d",&N);
	int a[N];
	for(int i=0; i<N; i++){
		scanf("%d\n",&a[i]);
	}
	for(int i=0; i<N; i++){
		printf("%d\n",a[i]);
	}
} 
