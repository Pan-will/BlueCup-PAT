/*
	数据规模和约定:1<=n<=10, 2<=c<=n, 1<=m<=10
*/ 
#include<stdio.h>
#include<string.h>
int n,m;//n表运动员数量;m表预测数据组数
bool use[20];//标记节点是否被选用 
int str[20][20]={0};
int flag[20];
int map[20000][15];
int k;//表满足预测的有多少种可能排名 
int judgedfs(){
	int x1=1,x2=1;
	for(int i=0;i<m;i++){
		//表该组预测数据是对的 
		if(str[i][str[i][0]+1]==1 && x1){
			int j=1;//从每组数据的第二个元素开始遍历
			//&&为了确保遍历深度; x<n表没有预测所有运动员的排名 
			for(int x=0; j<=str[i][0] && x<n; x++){
				if(str[i][j]==flag[x]){
					j++;
				}
			}
			if(j<str[i][0]+1){//表该组数据遍历完成 
				x1=0;
			}
		}else{//表该组预测数据是错的
			int j=1;
			for(int x=0; j<=str[i][0] && x<n; x++){
				if(str[i][j]==flag[x]){
					j++;
				}
			}
			if(j==str[i][0]+1){ 
				x2=0;
			}
		} 
		if(!x1 || !x2)//遍历完一组预测数据跳出循环 
			break;
	}
	//均为真返回真,否则返回假 
	if(x1 && x2)
		return 1;
	else
		return 0;
}
void dfs(int begin){
	if(begin==n && judgedfs()){//递归出口:已经搜索到最后一个运动员 
		for(int i=0;i<n;i++){
			map[k][i]=flag[i];//记录下将当前遍历到的运动员
		}
		k++;//可能的情况+1
	}
	if(begin<n){//执行递归搜索的条件 
		for(int i=0;i<n;i++){
			if(use[i]){//若为true,即未被选用 
				flag[begin]=i;//当前遍历位置记录下运动员的下标 
				use[i]=false;//此时选用
				dfs(begin+1);//递归调用,搜索下一个运动员
				use[i]=true;//返回初值,或回溯 
			}
		}
	}
}

int main(){
	scanf("%d%d",&n,&m);
	getchar();//处理此处的回车 
	for(int i=0;i<m;i++){//m组预测数据 
		//表此组预测数据预测的人数,后面的循环要用到 
		scanf("%d",&str[i][0]);
		//最后一列(即str[i][str[i][0]+1)表此组预测是否正确 
		for(int j=1;j<=str[i][0]+1;j++){
			scanf("%d",&str[i][j]);
		}
	}
	/*
	标记当前位置是否已被选用:是:false;否:true;初值均为true. 
	*/ 
	memset(use,true,sizeof(use));
	k=0;//对可能的情况置初值 
	dfs(0);//从第一个运动员开始搜索
	//格式化输出结果 
	printf("%d\n",k);
	for(int i=0;i<k;i++){
		for(int j=0;j<n;j++){
			printf("%d ",map[i][j]);
		}
		printf("\n");
	}
	return 0;
}
