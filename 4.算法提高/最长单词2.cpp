#include<stdio.h>
#include<string.h>
#define max 100000
int is_zimu(char ch){//判断字符ch是否为字母：是返回1，否则返回0 
	if(ch>='a' && ch<='z' || ch>='A' && ch<='Z')
		return 1;
	else
		return 0;
}
int main(){
	char str[max];
	int len=0,length=0;
	int point,place;
	gets(str);
	int flag=1;
	for(int i=0;i<=strlen(str);i++){
		if(!is_zimu(str[i])){//当前字符不是字母 
			if(len>length){
				length=len;//记录上一个单词长度 
				place=point;
			}
			flag=1;//标记置1
			len=0;//单词长度清0,接下来记录下一个单词长度 
		}else{
			if(flag)
				point=i;//存放当前字母元素的下标 
			len++;//单词长度+1 
			flag=0;//标记置0 
		}
	}
	for(int i=place;i<place+length;i++){
		printf("%c",str[i]);
	}
	return 0;
}
