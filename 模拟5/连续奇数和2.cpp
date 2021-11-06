#include<stdio.h>
#include<string.h>
#include<math.h>
#define N 99999999
int num[N];//用来存放一溜子奇数 
bool is_jishu(int n){//判断奇数 
	if(n%2==0) return false;
	else return true;
}
int main(){
	int index=0;
	long long result=0;
	long long sum = pow(111,3);
	for(long long i=1;i<sum/2;i+=2){
		result+=i;
		num[index++]=i;
		if(result==sum){
			printf("%d",num[0]);
			break;
		}
	}
	return 0;
}
