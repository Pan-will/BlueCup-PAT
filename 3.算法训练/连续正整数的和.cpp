#include<stdio.h>
main(){
	int n;
	scanf("%d",&n);
	int a[n+1];
	a[0]=0;
	for(int i=1;i<=n;i++){
		a[i]=a[i-1]+i;//��ǰ1~i�ĺ͸�����i��Ԫ��:1 3 6 10 15 21 28 36 45 55
//		printf("%d ",a[i]);
	}
	for(int i=0;i<=n-2;i++){
		for(int j=i+1;j<=n;j++){
			if((a[j]-a[i])==n){
				printf("%d %d\n",i+1,j);
			}
			else if((a[j]-a[i])>n){
				break;
			}
		}
	}
}
