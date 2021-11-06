#include<stdio.h>
int main()
{
	int m,n,i,j;
	scanf("%d",&m);
	int a[m];
	for(j=0; j<m; j++){
		scanf("%d", &a[j]);
	}
	scanf("%d",&n);
	for(i=0; i<=m; i++){
		if(a[i]==n){
			break;
		}
	}
	/*如果循环最后i的长度大于m，
	即数组长度，说明在数组中没有找到相等的数 */
	if(i>m){
		printf("-1");
	}else{
		printf("%d",i+1);
	} 
} 

