/*
"爱情指标":最大纯色正方形的面积.
用枚举：
	就是枚举每一个正方形的左上角顶点，定义最大正方形的变长是
curMax，如果从（i, j ）这个点为左上角顶点可以构成以curMax为边
长的正方形，那么curMax++，继续判断是否能构成更大的，直到不满
足条件退出循环，判断下一个枚举的顶点。
*/
#include<stdio.h>
int r,c;
int a[200][200];
int anlian(int p,int q,int max){
	int love = a[p][q];//将该顶点赋给标记love 
	if(p+max>r || q+max>c) return 0;//不能超过原矩阵的大小
	for(int i=p;i<p+max;i++){
        for(int j=q;j<q+max;j++){
            if(a[i][j] != love) return 0;
        }
    } 
	return 1;
}
int main(){
	scanf("%d%d",&r,&c);
	for(int i=0;i<r;i++){//描述操场 
        for(int j=0;j<c;j++){
            scanf("%d",&a[i][j]);
        }
    }
    int bian=0;//定义最大正方形的边长 
    int max=1;//标记 
    for(int i=0;i<r;i++){//行,先固定行,以该行上的每个点做定点试探 
        for(int j=0;j<c;j++){//列 
            while(1){
            	if(anlian(i,j,max)){
            		bian=max;
            		max++;
				}
				else
					break;
			}
        }
    }
    printf("%d",bian*bian);//输出指标 
    return 0;
}

