#include<stdio.h>
#include<algorithm>  
using namespace std;
int maxnum,minnum;
void pailie(int n){
	int a[4];
	a[0] = n / 1000 % 10;
	a[1] = n / 100 % 10;
	a[2] = n / 10 % 10;
	a[3] = n / 1 % 10;
	sort(a, a+4);//从小到大 
	maxnum = a[3]*1000 + a[2]*100 + a[1]*10 + a[0];
	minnum = a[0]*1000 + a[1]*100 + a[2]*10 + a[3];
}
int main(){
	int n,s;
	scanf("%d",&n);
	if((n/1000%10 == n/100%10) && (n/1000%10 == n/10%10) && (n/1000%10 == n/1%10) ){
		printf("%04d - %04d = 0000",n,n);
		return 0;
	}
	do{
		pailie(n);
		s = maxnum - minnum;
		printf("%04d - %04d = %04d\n",maxnum,minnum,s);
		n = s;
	}while(s != 6174);
	return 0;
}
