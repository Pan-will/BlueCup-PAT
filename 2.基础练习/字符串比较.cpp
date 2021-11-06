#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>
/*定义一个结构体*/
typedef struct Data{
	char str[100];
}date;
int cmp(const void *a,const void *b){
	date c = *(date*)a;
	date d = *(date*)b;
	//按姓名字符进行字典排序 
	if(strcmp(c.str,d.str)>0){
		printf("-1");
		return strcmp(c.str,d.str);
	}else if(strcmp(c.str,d.str)<0){
		printf("1");
		return strcmp(c.str,d.str);
	}else if(strcmp(c.str,d.str)==0){
		printf("0");
		return strcmp(c.str,d.str);
	}
}
int main(){
	date dat[100];//定义结构体数组
	for(int i=0;i<2;i++) {
		scanf("%s",dat[i].str);
	}
    qsort(dat,2,sizeof(dat[0]),cmp);
	return 0;
}
