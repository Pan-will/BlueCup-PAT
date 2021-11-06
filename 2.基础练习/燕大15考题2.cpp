#include<stdio.h>
void Inarray(int a[]){
	int i;
	for(i=0;i<20;++i){
		scanf("%d",&a[i]);
	}
}
void Outarray(int a[]){
	int i;
	for(i=0;i<20;++i){
		printf("%d ",a[i]);
	}
	printf("\n");
}
void Exchange(int a[]){
	int i,j,temp;
	for(i=0,j=19;i<j;++i,--j){
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
main(){
	int a[20];
	Inarray(a);
	Outarray(a);
	Exchange(a);
	Outarray(a);
}
