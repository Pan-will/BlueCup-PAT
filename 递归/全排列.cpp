/*
	求n个元素的全排列. 
	思路：每次取第一个元素，将后面的递归；
	注意：一定记得 ——回溯。 
*/
#include<stdio.h> 
#include<string.h>
void f(char a[],int k);
int main(){
	char a[] = {'A','B','C','D','E','F'};
	f(a,0);
}
/*k:记录从那里截断，后面的进行下一次递归调用*/
void f(char a[],int k){
	/*写出口*/
	if(k==strlen(a)){
		for(int i=0;i<strlen(a);i++){
			printf("%c ",a[i]);
		}
		printf("\n");
	}
	for(int i=k; i<strlen(a); i++){
		{char t = a[k];a[k] = a[i];a[i] = t;}//试探 
		f(a,k+1);
		{char t = a[k];a[k] = a[i];a[i] = t;}//回溯 
	}
}
