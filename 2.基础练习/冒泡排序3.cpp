#include <stdio.h>
void bubble_sort(int a[], int n){//��С���� 
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
    
	/*���ú���*/ 
    bubble_sort(number, SIZE);
    
	/*�����������*/ 
    for (i = 0; i < SIZE; i++)
        printf("%d ", number[i]);
        
    printf("\n");
}
