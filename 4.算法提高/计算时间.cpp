#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	while(n--){
		long long t;
		scanf("%lld",&t);
		int hour,min,second;
		hour = t/3600;
		min = (t-hour*3600)/60;
		second = t-hour*3600-min*60;
		printf("%02d:%02d:%02d\n",hour,min,second);
	}
	return 0;
}
