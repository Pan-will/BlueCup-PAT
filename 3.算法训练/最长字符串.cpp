#include<stdio.h>
#include<string.h>
int main(){
	char str[5][100];
	int max=0;//记录最长串的下标 
	int a[5];//记录字符串长度的数组 
	for(int i=0;i<5;i++){
		scanf("%s",str[i]); 
		a[i]=strlen(str[i]);//只有将str定义为二维数组才行 
	}
	for(int i=0;i<5;i++){
		if(a[i]>a[max]){//寻找最大下标 
			max = i;
		}
	}
	printf("%s",str[max]);
}
