/*171700*/
#include<stdio.h> 
int main(){
	int sum=0,ans=0;
	int meiqiu[100];
	for(int i=1;i<=100;i++){
		sum+=i;//第i层煤球数量 
		ans+=sum;//1-i层煤球数量和 
	}
	printf("%d",ans);
	return 0;
}
