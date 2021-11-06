#include<stdio.h>
#include<string.h>
#include<math.h>
bool use[10];
int a[10];
int ans=0;
int sum(int start,int end){
	int sum=0;
    for(int i=start;i<end;i++)
		sum=sum*10+a[i+1];
    return sum;
}
void check(int a[],int num){
	int begin=1;
	int t = num;
	while((t=t/10)!=0)
		begin++;
	for(int i=1;i<begin+1;i++){
		int num1 = sum(0,i);
		if(num1>=num)
			return;
		for(int j=i+(10-i)/2;j<10-1;j++){
			int num2 = sum(i,j);
			int num3 = sum(j,10-1);
			if(num2>num3 && num2%num3==0 && num==num1+num2/num3){
				printf("%d=%d+%d/%d\n",num,num1,num2,num3);
				ans++;
			}
		}
	}
}
void dfs(int begin,int num){
	if(begin==10){
		check(a,num);
	}
	//dfsÖ÷Ìå 
	for(int i=1;i<10;i++){
		if(!use[i]){
			use[i]=true;
			a[begin]=i;
			dfs(begin+1,num);
			use[i]=false;
		}
	}
}
int main(){
	int n;
	scanf("%d",&n);
	memset(use,false,sizeof(use));
	dfs(1,n);
	printf("%d",ans);
	return 0;
}
