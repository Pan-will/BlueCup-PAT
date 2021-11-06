#include<stdio.h>
#include<string.h>
#define MAXSIZE 10000
char s[MAXSIZE];//原字符串 
char result[MAXSIZE];//结果数组 
int p,len, p1,p2,p3;//p表索引，len表原字符串长度 
void operate(int i){//定义函数，参数为出现'-'的位置i 
    int j, lenz;//lenz表示填充的字符串长度 
    char insert;//表示要填充的字符 
    if(p1==2 && s[i-1]>='a' && s[i-1]<='z'){//p1=2:填充大写字符 
        insert = s[i-1] - ('a'-'A') + 1;
    }else{//否则按顺序填充就行
        insert = s[i-1] + 1;
    }
    if(p1 == 3){//p1=3:填充 * 
        insert = '*';
    }
    lenz = s[i+1] - s[i-1];//得到填充的字符串的长度 
    if(insert == '*'){//若填充的字符为* 
        for(i=1; i<lenz; i++){
            for(j=0; j<p2; j++){//填充p2个字符 
                result[p++] = insert;
            }
        }
    }else{
        if(p3 == 1){//原序填充 
            for(i = 1; i < lenz; i ++, insert ++){
                for(j = 0; j < p2; j ++){
                    result[p++] = insert;
                }
            }
        }
        if(p3 == 2){//逆序填充 
            insert += lenz - 2;
            for(i = 1; i < lenz; i ++, insert --){
                for(j = 0; j < p2; j ++){
                    result[p++] = insert;
                }
            }
        }
    }
}
int main(){
    int i;
    scanf("%d%d%d\n%s",&p1,&p2,&p3,s);//录入数据 
    len = strlen(s);//得到输入的字符串的长度 
    for(i=0; i<len; i++){//排除不需要填充的情况 
        if(s[i] != '-' || !(('0'<=s[i-1] && s[i+1]<='9') || ('a'<=s[i-1] && s[i+1]<='z'))){
            result[p++] = s[i];
        }else{
            if(s[i+1] > s[i-1]){//正序则需要填充 
                operate(i);//调用 
            }else{//若不是正序也不用填充 
                result[p++] = s[i];
            }
        }
    }
    printf("%s", result);//输出结果 
    return 0;
}
