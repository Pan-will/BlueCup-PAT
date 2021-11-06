#include<math.h>
#include<stdio.h>
int main(){
	int n,a,sn,sa;
	double m;
	printf(" ‰»Î a,n:");
	scanf("%d,%d",&a,&n);
	for(m=0,sn=0,sa=a;m<=(n-1);){
		sn=sn+sa;
		sa = sa*10+a;
		m++;
	}
	printf("sn=%d",sn);
	return 0;

}
