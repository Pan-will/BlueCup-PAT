#include<stdio.h>
int zuhe1(int n,int k){
	if(n==1) 
		return 2;//出口 
	else if(n==2)
		return 1;
	else if(n==3)
		return 6;
	else 
		return (zuhe1(n-1,2)+2*zuhe1(n-3,1)+5)%99999999;
}
int zuhe2(int n,int k){
	if(n==1) 
		return 3;//出口 
	else if(n==2)
		return 4;
	else if(n==3)
		return 5;
	else 
		return (zuhe2(n-1,1)+3*zuhe2(n-3,1)+2*zuhe2(n-3,2)+3)%99999999;
}
int main(){
	int n;
	int ans1,ans2; 
	scanf("%d",&n);
	ans1=zuhe1(n,1);
	ans2=zuhe2(n,2);
	printf("%d\n%d",ans1,ans2);
	return 0;
}
