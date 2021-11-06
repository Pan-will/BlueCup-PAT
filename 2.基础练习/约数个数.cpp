#include<stdio.h>
int main(){
	int n;
	int sum=0;
	scanf("%d",&n);
	if(n==0) return 0;
	for(int i=1;i<=n/2;i++){
		if(n%i==0){
			sum++; 
		}
	}
	printf("%d",sum+1);//任何数本身为其一个约数 
}
