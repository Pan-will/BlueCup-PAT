#include<stdio.h>
#include<string.h>
#include<math.h>
#define N 99999999
int num[N];//用来存放一溜子奇数 
bool use[N];
long long result=0;
long long sum;
void dfs(int begin){
	if(result==sum){
		printf("%d",num[1]);
		return;
	}
	for(long long i=begin;i<sum;i+=2){
		if(!use[i]){
			use[i]=true;
			num[begin]=i;
			result+=num[begin];
			dfs(begin+2);
			use[i]=false;
		}
	}
}
int main(){
	memset(use,false,sizeof(use));
	sum = pow(111,3);
	dfs(1);
	return 0;
}
