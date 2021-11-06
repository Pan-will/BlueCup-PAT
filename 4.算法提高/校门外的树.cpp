/*
注意：输入L，则共有L+1棵树。
思路：
	用数组a[L+1],赋初值为1 ；
	输入一个区间都将a中区间内的元素置值0；
	统计a中非0元素个数即答案。 
*/
#include<stdio.h>
int main(){
	int L,M;
	int ans=0;//表最后剩下的数 
	scanf("%d%d",&L,&M);
	int tree[L+1];//输入L则有L+1棵树
	for(int i=0;i<L+1;i++){
		tree[i]=1;
	}
	for(int i=0;i<M;i++){
		int a,b;//表示每个起点和终点
		scanf("%d %d",&a,&b);
		for(int j=a;j<=b;j++){
			tree[j] = 0;
		}
	}
	for(int i=0;i<L+1;i++){
		if(tree[i]){
			ans++;
		}
	}
	printf("%d",ans);
	return 0;
}
