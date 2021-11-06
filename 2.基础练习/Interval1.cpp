/*Çó¾ØÕóÔªËØºÍ*/
#include<stdio.h>
int main(){
	int n,m,t,sum=0;
	scanf("%d %d",&n,&m);
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&t);
			sum+=t;
		}
	}
	printf("%d",sum);
}
