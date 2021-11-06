#include<stdio.h>
int main(){
//	int a[3][3];
//	int i,j;
//	for(i=0;i<3;i++) {
//		for(j=0;j<3;j++){
//			scanf("%d",&a[i][j]);
//		}
//	}
//	int sum=0;
//	for(i=0;i<3;i++){
//		sum += a[i][i];
//	}
//	for(i=0,j=2;i<3,j>=0;i++,j--){
//		sum += a[i][j];
//	}
//	printf("%d",sum-a[1][1]);
//	return 0;

	int n,i,j,sum=0;
	scanf("%d",&n) ;
	int a[n][n];
	for(i=0;i<n;++i){
		for(j=0;j<n;++j){
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;++i) sum+=a[i][i];
	for(i=0,j=n-1;i<n,j>=0;++i,--j) sum+=a[i][j];
	if(n%2==0) printf("%d",sum);
	else printf("%d",sum-a[n/2][n/2]);
	return 0;
}
