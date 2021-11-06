#include<stdio.h> 
#include<string.h>
int sum;//收集到的珠子总数
char str[100];//表示项链
int len;//项链长度

int main(){
	sum=0;//总数初值为0 
	int i,j;
	gets(str);
	char sign;//设置记号 
	len = strlen(str);//得到项链长度 
	//正序数 
	for(i=0;i<len;i++){
		if(str[i]=='b' || str[i]=='r'){
			sign=str[i];//记录下遇到的第一个非白色珠子 
			sum++;
			break;
		}
	}
	for(j=i;j<len;j++){
		if(str[j]==sign || str[j]=='w'){
			sum++;
		}else{
			break;
		}
	}
	//倒序数 
	for(i=len-1;i>=0;i--){
		if(str[i]=='b' || str[i]=='r'){
			sign=str[i];//记录下遇到的第一个非白色珠子 
			sum++;
			break;
		}
	}
	for(j=i-1;j>=0;j--){
		if(str[j]==sign || str[j]=='w'){
			sum++;
		}else{
			break;
		}
	}
	
	printf("%d",sum);
	return 0;
}
