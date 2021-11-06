#include<stdio.h>
int n,m;
int A[50]={0},v[50]={0};//v用来标记当前位置是否种了树 
int paint(int x,int m){//m:要种的树;x是当前选的位置 
	int sum=0;//表鉴赏值 
	int i,j;
	i=-1,j=-1;//赋初值 
	if(x>=n && m>0){//若搜索的位置已经到了尾端，但是还有树没有种 
		return -1;
	}
	if(x<n && m>0){//符合条件，继续种树 
		if(v[(x+1)%n]==0){//若下个位置未被标记(v[x]为0)才能选中当前位置 
			v[x] = 1;//选中当前位置,v[x]置1 
			i = paint(x+2,m-1);//判断下一个位置,要种的树-1
			v[x] = 0;//若不选当前位置，则标记不变，或称为还原标记 
		}
		j = paint(x+1,m);//当前位置未被选中，判断下一个位置,树的棵树不变 
		if(i!=-1 && sum<i+A[x])//判断求最大鉴赏值    
			sum=i+A[x];
		if(sum<j)//搜索下个位置的最大鉴赏值 j!=-1 && 
			sum=j;
		if(j==-1)//都不满足条件 	i==-1 && 
			sum=-1;
	}
	return sum;
}
int main(){
	scanf("%d%d",&n,&m);//n个种树位置，提供m棵树 
	for(int i=0;i<n;i++){//输入观赏值 
		scanf("%d",&A[i]);
	}
	if(m>n/2){//位置不够 
		printf("Error!");
	}else{
		printf("%d",paint(0,m));
	}
	return 0;
}
