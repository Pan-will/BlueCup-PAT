/*
insert zhangsan 90
insert wangwu 78
insert lisi 86
find xiaoming
find lisi
*/ 
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>
typedef struct Info{
	char name[20];
	int score;
}info;
int main(){
	info stu[1000];
	char sign[6];
	int index;
	char name[20];
	scanf("%s",&sign);
	if(sign[0]=='i'){
		for(index=0;;index++){
			scanf(" %s %d",&stu[index].name,&stu[index].score);
		}
	}
	if(sign[0]=='f'){
		scanf(" %s",&name);
		for(int i=0;i<index;i++){
			if(strcmp(name,in[i].name)==0)
				printf("%d",in[i].score);
			else
				printf("-1");
		}
	}
	if(sign[0]=='e')
		return 0;
} 
