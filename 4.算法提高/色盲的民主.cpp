/*
	注意：
	%s不能接收空格、回车；
	gets()以回车或EOF结束； 
	getchar()可以消除回车、空格符；
	gets()一般与getchar()配合使用,getchar()用于处理数据中不必要的换行及空格。 
*/ 
#include<stdio.h>
#include<string.h>
#include<math.h>
#include<stdlib.h>
#include<ctype.h>
/*定义一个结构体:包括定义颜色的名称及其个数*/
typedef struct Color{
	char color[50];//不同的颜色 
	int num;//每个颜色的个数 
}col;
int cmp(const void *a,const void *b){
	col c = *(col*)a;
	col d = *(col*)b;
	//按数量的多少对颜色名称进行字典排序 
	if(c.num == d.num){
		return strcmp(c.color,d.color);
	}else{
		return d.num - c.num;
	}
}
int main(){
	col co[2000];//定义结构体数组 
	char color[30];//颜色单词最多20个字符
	int re=0;//表需要排序的颜色个数,初值为0 
	int n;//数据组数 
	scanf("%d",&n);
	getchar();//输入n后有一个回车，用getchar()处理掉,否则gets会都到一个空字符串 
	for(int i=0;i<n;i++){
		int j=0;//下标 
		//输入一个颜色单词
//		scanf("%s",&color); 
		gets(color);//%s不能处理回车换行空格符,而此题每个数据都有一个换行,用gets接收 
		//先判断有没有存着此颜色
		for(j=0;j<re;j++){
			if(strcmp(color,co[j].color)==0)
				break;
		}
		//若已经存了，该颜色数量+1
		if(re!=j){
			co[j].num++;
		}
		//若没有存，此时存进去 
		else{
			strcpy(co[re].color,color);
			co[re].num=1;//改颜色的数量为1
			re++;//需要排序的颜色个数+1 
		}
	}
	//排序 
	qsort(co,re,sizeof(co[0]),cmp);
	for(int i=0;i<n;i++){ 
		if(co[i].num == co[0].num){
			printf("%s\n",co[i].color);
		}
	}
	return 0;
}
