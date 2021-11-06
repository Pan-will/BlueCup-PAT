#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<string.h>
int f[10];
int N,path[9][2],count=0;
int isOK(int a,int b){
    int dig[][3] = {{1,3,2},{1,7,4},{1,9,5},{2,8,5},{3,7,5},{3,9,6},{4,6,5},{7,9,8}};
    for(int i = 0;i<8;i++){
        if(dig[i][0]==a&&dig[i][1]==b||dig[i][1]==a&&dig[i][0]==b){
            if(!f[dig[i][2]]) return 0;
        }
    }
    return 1;
}
void dfs(int number,int step,int* process){
    if(step>=2){//当process数组里面至少有2个数时开始判断，代表我要选取最近划中的2个数字是否合法
        int a = process[step-2];
        int b = process[step-1];
        if(!isOK(a,b)) return;
    }
    if(step==number){//判断是否存在此数组，存在则继续，不存在直接返回代表不符合
        for(int i = 0;i<N;i++){
            int a = path[i][0];
            int b = path[i][1];
            for(int j = 0;j<step-1;j++){
                if(a==process[j]&&b==process[j+1]||a==process[j+1]&&b==process[j])break;
                if(j==step-2)return;
            }
        }
        count++;
        return;
    }else if(step>number)return;
    for(int i = 1;i<=9;i++){
        if(!f[i]){
            f[i] = true;
            process[step] = i;
            dfs(number,step+1,process);
            f[i] = false;
        }
    }
}
int main(){
    scanf("%d",&N);
    int process[10] = {0};
    for(int i = 0;i<N;i++){
        scanf("%d%d",*(path+i),*(path+i)+1);
    }
    for(int i = N>4?N:4;i<=9;i++){//枚举划中的数字个数
        dfs(i,0,process);
    }
    printf("%d",count);
    return 0;
}
