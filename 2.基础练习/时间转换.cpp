#include<stdio.h> 
int main(){
	int t;
	scanf("%d",&t);
	int h = t/3600;
	int m = (t - h*3600)/60;
	int s = t-h*3600-m*60;
	printf("%d:%d:%d",h,m,s);
}
