#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int ans=0;
void sheng(int a[]){
	for(int i=0;i<4-1;i++){
		for(int j=0;j<4-i-1;j++){
			if(a[j]>a[j+1]){
				int t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			}
		}
	}
}
void jiang(int a[]){
	for(int i=0;i<4-1;i++){
		for(int j=0;j<4-i-1;j++){
			if(a[j]<a[j+1]){
				int t = a[j];
				a[j] = a[j+1];
				a[j+1] = t;
			}
		}
	}
}
int tomax(int num){
	int a[4]={0};
	a[0] = num/1000%10;//千位 
	a[1] = num/100%10;//百位 
	a[2] = num/10%10;//十位 
	a[3] = num%10;//个位 
	jiang(a) ;
	return a[0]*1000+a[1]*100+a[2]*10+a[3];
}
int tomin(int num){
	int a[4]={0};
	a[0] = num/1000%10;//千位 
	a[1] = num/100%10;//百位 
	a[2] = num/10%10;//十位 
	a[3] = num%10;//个位 
	sheng(a) ;
	return a[0]*1000+a[1]*100+a[2]*10+a[3];
}
void dfs(int num){
	if(num==6174){
		return;
	}
	num=tomax(num)-tomin(num);
	ans++;
	dfs(num);
}
int main(){
	int num;
	scanf("%d",&num);
	dfs(num);
	printf("%d",ans);
	return 0;
}
