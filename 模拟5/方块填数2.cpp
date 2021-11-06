#include<stdio.h>
#include<string.h>
bool use[15];
int a[15];
int sum=0;
void dfs(int begin){
	if(begin==6){//加快跳出
		if(a[0]*a[1]+a[2]*a[3]!=a[4]*a[5]){
			return;
		}
	}
	if(begin==12){
		if((a[0]*a[1]+a[2]*a[3]==a[4]*a[5]) && (a[6]*a[7]-a[8]*a[9]==a[10]*a[11])){
			sum++;
			return;
		}
	}
	for(int j=1;j<=13;j++){
		if(!use[j]){
			use[j] = true;
			a[begin] = j;
			dfs(begin+1);
			use[j] = false;
		}
	}
}
int main(){
	memset(use,false,sizeof(use));//赋初值 
	dfs(0);
	printf("%d",sum);
	return 0;
} 

