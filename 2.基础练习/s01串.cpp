#include<stdio.h>
#include<string.h>
/*全局变量*/
char s[20000];
int slen;//s数组的长度 

/*定义操作的函数*/
void changing(){
    char t[20000];
    int len=0;//t数组的长度 
    for(int i=0;i<slen;i++){
        if(s[i]=='1'){
            t[len++]='0';
        }
        t[len++]='1';
    }
    for(int i=0;i<len;i++){
        s[i]=t[i];//将t数组值赋给s数组 
    }
    slen=len;//将t数组长度赋给s数组 
}
int main(){
    int n;
    s[0]='0';//将s的首元素赋值为0 
    slen=1;//初始长度为1 
    scanf("%d",&n);
    while(n--){
        changing();
    }
    printf("%s",s);
    return 0;
}
