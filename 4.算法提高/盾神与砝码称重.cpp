#include<stdio.h>
#include<string.h>
int flag[1001]; //标记位
void dfs(int m,int sum,int good[]){
	
    for(int i=0;i<m;i++){//m种物品 
        if(sum>=good[i])
            printf("YES\n");
        else
			printf("NO\n");
    }
}
int main(){
	memset(flag,0,sizeof(flag));//给标记数组赋初值 
	int n,m;
	int sum=0;//总质量sum
	scanf("%d%d",&n,&m);
	int weight[n],good[m];//定义砝码数组，货物数组 
	for(int i=0;i<n;i++){
		scanf("%d",&weight[i]);
		sum+=weight[i];//所有砝码的重量
	}
	for(int i=0;i<m;i++){
		scanf("%d",&good[i]);//每个物品的重量
	}
    dfs(m,sum,good);
    return 0;
}


