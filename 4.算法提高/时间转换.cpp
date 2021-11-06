#include<stdio.h>
int main(){
	long long t;
	scanf("%lld",&t);
	int d,h,m;
	d = t/1440;
	h = (t-d*1440)/60;
	m = t-d*1440-h*60;
	printf("%d %d %d",d,h,m);
	return 0;
}
