/*
测试数据: 
4
1 1 1 1
1 1 1 1
1 1 1 1
1 1 1 1
*/
#include<stdio.h>
#include<string.h>
#include<math.h>
int hei[9];//黑皇后
int bai[9];//白皇后
int chessboard[9][9];//1:能放  0:不能放
int count = 0;

int check(int queen[],int n){//判断同一列或者两对角线是否已经放置了  
    for(int i=1; i<n; i++){  
        int judge = queen[i]-queen[n];  
        if(judge==0 || judge==i-n || judge==n-i){  
            return 0;  
        }  
    }  
    return 1;  
}  
void White(int line,int n){
    if(line==n+1){
    	count++;
	}else{
		for(int i=1; i<=n; i++){
			if(chessboard[line][i]==1 && i!=hei[line]){
				bai[line]=i;
				if(check(bai,line)){
					White(line+1,n);
				}
			}
	    }
	}
}
int Black(int line,int n){
    if(line == n+1){
        White(1,n);
    }else{
    	for(int i=1;i<=n;i++){
	        if(chessboard[line][i]==1){
	            hei[line]= i;
	            if(check(hei,line)){
	            	Black(line+1,n);//递归下一行 
				}
	        }
		}
	}
}
int main(){
	int n;
    scanf("%d",&n);
    for(int i =1; i <= n; i++)  
        for(int j =1; j <= n; j++)  
        	scanf("%d",&chessboard[i][j]);
    Black(1,n);
    printf("%d",count);
    return 0;
}
