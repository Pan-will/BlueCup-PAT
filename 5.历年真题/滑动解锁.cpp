/*
测试数据： 
1 2
2 3
3 4
4 5
5 6
6 7
7 8
8 9
*/
#include<stdio.h>
#include<stdlib.h> 
#include<string.h>
#include<math.h>
int n;//看到的折线段数目
int path[9][2];//表看到的片段 
int ans=0;
bool use[9];//标记该位置是否滑过 
int hefa(int a,int b){
	//枚举出8个非法集合
	int feifa[][3]={{1,3,2},{1,7,4},{1,9,5},{2,8,5},{3,7,5},{3,9,6},{4,6,5},{7,9,8}};
	for(int i=0;i<8;i++){
		if((a==feifa[i][0] && b==feifa[i][1]) || (a==feifa[i][1] && b==feifa[i][0])){
			if(!feifa[i][2]){
				return 0;
			}
		}
	}
	return 1;
}
void dfs(int number,int begin,int press[]){
	//若已经选中2个数字了,判断刚刚选中的两个数字是否合法 
	if(begin >= 2){
		int a = press[begin-1];
		int b = press[begin-2];
		if(!hefa(a,b)){
			return;
		}
	}
	/*表已经选中的数字达到需要选择的数量(number)；
	 与已看到的片段比较,若刚选中的片段存在于已看到的片段数组中,则继续,否则返回。 
	*/ 
	if(begin==number){
		for(int i=0;i<n;i++){
			int a = path[i][0];
			int b = path[i][1];
			for(int j=0;j<=begin-1;j++){
				if((a==press[j] && b==press[j+1]) || (b==press[j] && a==press[j+1])){
					break;
				}
				if(j==begin-2)
					return;
			}
		}
		ans++;
		return;
	}
	else if(begin>number){//选多了 
		return;
	}
	//dfs主体 
	for(int i=1;i<=9;i++){
		if(!use[i]){
			use[i] = true;
			press[begin] = i;
			dfs(number,begin+1,press);//搜索下一个 
			use[i] = false;
		}
	}
}
int main(){
	memset(use,false,sizeof(use));
	scanf("%d",&n);
	getchar();//处理回车 
	int press[10]={0};//存放当前划中数字的数组
	for(int i=0;i<n;i++){
		scanf("%d%d",&path[i][0],&path[i][1]);
	}
	for(int i=n>4?n:4; i<=9; i++){
		/*参数含义：
			i:划中得数字;
			0:begin:划得位置，选到第几个了;
			press:存放当前划中数字的数组 .
		*/
		dfs(i,0,press);
	}
	printf("%d",ans);
	return 0;
}
