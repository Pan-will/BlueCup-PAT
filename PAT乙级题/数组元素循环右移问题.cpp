#include<stdio.h>
/*
 * 思路: 
 * 1.m为数组元素个数, n为右移的位置个数; 
 * 2.因为如果n>m那么右移n次效果和右移n%m次效果是一样的; 
 * 3.所以循环y次,y=n%m; 
 * 4.题目要数组元素循环右移,只要从m-y开始输出到数组位置末; 
 * 5.然后从位置0开始输出到位置m-y; 
*/
int main(){
	int m,n;
	scanf("%d %d",&m,&n);
	int arr[m];
	for(int i=0;i<m;i++){
		scanf("%d",&arr[i]);
	}
	int y = n%m;//循环次数 
	for(int i=m-y;i<m;i++){
		printf("%d ",arr[i]);
	}
	for(int i=0;i<m-y;i++){
		if(i == m-y-1) printf("%d",arr[i]);
		else printf("%d ",arr[i]);
	}
	return 0;
}
