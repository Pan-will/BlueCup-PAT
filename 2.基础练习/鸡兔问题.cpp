#include<stdio.h>
int main(){
	int n,m,t,i=1;
	double a,b;
	scanf("%d",&t);
	while(i<=t){
		scanf("%d%d",&n,&m);
		a=2*n-0.5*m;
		b=0.5*m-n;
		if((int)a==a&&(int)b==b&&a>=0.0&&b>=0.0)
			printf("%d %d\n",(int)a,(int)b);
		else
			printf("No answer\n");
		i++;
	}
	return 0;
} 
