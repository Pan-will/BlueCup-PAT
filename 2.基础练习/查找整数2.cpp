#include<stdio.h>
int main(){
	int m=0,n=0,i,j;
	scanf("%d",&m);
	int a[1000]={0};//数组定义的比给的稍大一点,不用刚刚好
	for(i=0; i<m; i++){
		scanf("%d", &a[i]);
	}
	scanf("%d",&n);
	for(j=0; j<m; j++){
		/*找到相等的数后就做相应打印并停止执行程序 */ 
		if(a[j]==n){
			printf("%d",j+1);
			return 0;
		}
	}
	/*循环结束就意味着这不到相等的数，做相应的打印就好*/ 
	printf("-1");
	return 0;
}