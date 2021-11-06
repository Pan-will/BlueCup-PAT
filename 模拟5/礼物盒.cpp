#include<stdio.h>
#include<stdlib.h>
int kuan[36];
void paixu(int b[]){
	for(int i=0;i<36-1;i++){
		for(int j=0;j<36-1-i;j++){
			if(b[j]>b[j+1]){
				int t = b[j];
				b[j] = b[j+1];
				b[j+1] = t;
			}
		}
	}
}
void dfs(int begin,int sum,int ans){
	if(sum==100){
		printf("%d",ans);
		exit(0);//结束程序 
	}
	for(int i=begin; i<35; i++){
		dfs(i+1,sum+kuan[i],ans+1);
	}
}
int main(){
	int a[36],gao[36];
	int ans, n;
	for(int i=0;i<36;i++){
		scanf("%d%d",&kuan[i],&gao[i]);
	}
	paixu(kuan);
	dfs(0,0,0);
	return 0;
}

/*
以下为测试数据: 
11 3
8 12
11 17
16 13
1 14
2 8
6 10
10 18
17 11
10 15
6 14
5 6
2 19
19 10
4 9
7 9
5 14
5 20
15 19
3 17
15 11
7 25
11 20
9 12
17 4
9 19
4 18
10 10
12 19
17 3
19 9
20 16
11 16
10 2
20 15
3 14
*/
