#include<stdio.h>
#include<math.h>
int main(){
	int n,m;
	int sum=0;
	scanf("%d%d",&n,&m);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int l,r;
	for(int i=0;i<m;i++){
		scanf("%d%d",&l,&r);
		for(int j=l-1;j<=r-1;j++){
			//对元素a[j]求以2为底的对数,加1,再向下取整 
			a[j] = floor(log2(a[j])+1);
		}
		for(int k=0;k<n;k++){
			sum+=a[k];
		}
		printf("%d\n",sum);
		sum=0;//序列和置0 
	}
	return 0 ;
}
