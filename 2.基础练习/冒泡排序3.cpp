#include <stdio.h>
void bubble_sort(int a[], int n){//从小到大 
	int i, j, temp;
    for (j = 0; j < n - 1; j++)
        for (i = 0; i < n - 1 - j; i++)
         	if(a[i] > a[i + 1]){
			 	temp=a[i];
				a[i]=a[i+1];
				a[i+1]=temp;
			}
}

int main()
{
	int number[10] = {95, 45, 15, 78, 84, 51, 24, 12, 38, 97};
    int i,SIZE=10;
    
	/*调用函数*/ 
    bubble_sort(number, SIZE);
    
	/*遍历输出数组*/ 
    for (i = 0; i < SIZE; i++)
        printf("%d ", number[i]);
        
    printf("\n");
}
