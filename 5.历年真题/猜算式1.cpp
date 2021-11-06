/*
解题思路：
		此题为搜索题，将乘法式子中的四个数用a,b,c,d表示，
	这四个数一共九位，每位是1-9这九个数中的一个，所以每确
	定一组数dfs九次，每次将1-9这九个数都试探一下，并记录a,b,c,d的具体值，
	记录方式为id=1，表示a的十位；id=2，表示个位，以此类推。
	
	注意：每组dfs后需要把访问标记数组以及a,b,c,d,还原为前面的状态。
*/ 
#include<stdio.h>
#include<string.h>
int a,b,c,d;//a*b=c*d
bool visit[10];//访问标记数组，表是否已经访问 
bool com[10000];//判断a与b的积是否出现过
void dfs(int id)//id表示到了那个数的哪一位
{  
    if(id==10)//一组数记录完成，判断是否能实现a*b=c*d
    {  
        if(a*b==c*d && com[a*b]==0)  
        {
        	printf("%2d*%2d = %2d*%3d\n",a,b,c,d);
            com[a*b]=1;  
        }  
        else  
            return;  
    }  
    for(int i=1; i<=9; i++){  
        if(visit[i]==0){  
            if(id==1)  
                a=i*10;  
            if(id==2)  
                a+=i;  
            if(id==3)  
                b=i*10;  
            if(id==4)  
                b+=i;  
            if(id==5)  
                c=i*10;  
            if(id==6)  
                c+=i;  
            if(id==7)  
                d=i*100;  
            if(id==8)  
                d+=i*10;  
            if(id==9)  
                d+=i; 
				 
            visit[i]=1;
            dfs(id+1);
            visit[i]=0; 
			 
            if(id==2)  
                a-=i;  
            if(id==4)  
                b-=i;  
            if(id==6)  
                c-=i;  
            if(id==8)  
                d-=i*10;  
            if(id==9)  
                d-=i;
        }  
    }  
}  
int main(){  
    memset(visit,0,sizeof(visit));  
    memset(com,0,sizeof(com));  
    dfs(1);
	return 0; 
}
