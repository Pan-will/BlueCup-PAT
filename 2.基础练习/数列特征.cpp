#include<stdio.h>
int main(){
	int n,sum=0;
	scanf("%d",&n);
	int a[n];
	for(int i=0; i<n; i++){
		scanf("%d",&a[i]);
		sum+=a[i];
	}
	for(int i=0;i<n-1;i++) {
		for(int j=i+1;j<n;j++){
			if(a[i]>a[j]){
				int t = a[i];
				a[i] = a[j];
				a[j] = t;
			}
		}
	} 
	printf("%d\n%d\n%d",a[10],a[0],sum);
}
