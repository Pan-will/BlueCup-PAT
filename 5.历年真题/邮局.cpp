#include<stdio.h>
#include<string.h>
#include<math.h>
//求两点间的直线距离 
int juli(int x1,int x2,int y1,int y2){
	return sqrt((x2-x1)*(x2-x1)+(y2-y1)*(y2-y1));
}
int main(){
	int n,m,k;//n:户数；m:待选数；k:中选数 
	scanf("%d%d%d",&n,&m,&k);
	getchar();//处理掉此处的换行 
	int way[m];//表每个待选邮局到每一户的距离,排序后输出最小的k个 
	int x[m+n],y[m+n];//放坐标 
	int flag=0;//标记 
	for(int i=0;i<m+n;i++){
		scanf("%d%d",&x[i],&y[i]);
	}
	for(int i=n;i<m+n;i++){//待选邮局数 
		for(int j=0;j<n;j++){//户数 
			way[flag++]=juli(x[i],x[j],y[i],y[j]);//每户到该邮局的距离之和 
		}
	}
	//冒泡升序
//	for(int i=0;i<m-1;i++) {
//		for(int j=0;j<m-1-i;j++){
//			if(way[j]>way[j+1]){
//				int temp = way[j];
//				way[j] = way[j+1];
//				way[j+1] = temp;
//			}
//		}
//	}
	int p=2;
	while(p--) {
		int min=way[0],index=0;
		for(int i=1;i<=m;i++){
			if(way[i]<=min && way[i]!=-1){
				min = way[i];
				index=i;
				way[i]=-1;
			}
		}
		printf("%d ",index);
	}
//	printf("\n升序的way数组:");
//	for(int i=0;i<m;i++){
//		printf("%d ",way[i]);
//	}
//	printf("\n最短两个距离为：%d %d",way[0],way[1]);
	return 0;
}
