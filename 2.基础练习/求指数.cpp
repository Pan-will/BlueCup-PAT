#include<stdio.h>
#include<math.h>
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	int i=1;
	int answer,flag=0;
	for(flag=1;i<=m;i++,flag++){
		answer = pow(n,i);
		printf("%12d",answer);
		if(flag%5==0)
			printf("\n");
	}
}
