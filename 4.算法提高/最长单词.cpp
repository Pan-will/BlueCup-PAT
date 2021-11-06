#include<stdio.h>
#include<string.h>
int alpha(char c){
    if(c>='a'&&c<='z'||c>='A'&&c<='Z'){
        return 1;
    }else {
        return 0;
    }
}
int main(){
    int i,pointer,point,place,len,length,num;
    char str[1001];
    while(gets(str)){
        int flag=1;
        len=length=num=0;
        for(i=0;i<=strlen(str);i++){
            if(!alpha(str[i])){
                if(len>length){
                    length=len;
                    place=point;
                }
                flag=1;
                len=0;
            }else{
                if(flag){
                    point=i;
                    num++;
                }
                len++;
                flag=0;
            }
        }
        for(i=place;i<place+length;i++)
            printf("%c", str[i]);//输出最长单词
        printf("\n");
        printf("%d\n", length);//输出最长最长单词长度
        printf("%d\n", num);//输出该字符串中有几个单词

    }
    return 0;
}
