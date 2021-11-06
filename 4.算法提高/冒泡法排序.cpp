#include<stdio.h>
int main()
{
	int i,j;
	int a[10];
	for(i=0; i<10; i++){
		scanf("%d",&a[i]);
	}
	for(i=0; i<10-1; i++){
		for(j=0; j<10-1-i; j++){
			/*ÉýÐò*/
			if(a[j]>a[j+1]){
				int t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			}
		}
	}
	for(i=0; i<10; i++){
		printf("%d ", a[i]);
	}
} 
