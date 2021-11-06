#include<stdio.h>
#include<string.h>
#include<stdlib.h>
char line[100000*100];//每行数据的最长长度 
int piao[10010];//票数量 
int cmp(const void *a,const void *b){
	return *(int *)a - *(int *)b;
}
int main(){                     
   	int n;
   	scanf("%d",&n);
   	getchar();//处理此处的换行符 
   	int num=0;//票数量
	int index;//数组下标 
   	for(int i=0; i<n; i++){
		gets(line);//将一行数据以字符串的方式接收
		//分解字符串为一组字符串
		char *p = strtok(line," ");//line为要分解的字符串,空格分隔符字符 
		//atoi将字符串转为int类型
		piao[index++]=atoi(p);//将数据转为int类型赋给票据数组 
		while(p){
			p = strtok(NULL," ");
			if(p){
				piao[index++] = atoi(p);
			}
		}
		//排序 
		qsort(piao,index,sizeof(piao[0]),cmp);
	}
	int duan=0,chong=0;
   	for(int i=0;i<index-1;i++){
        if(piao[i]==piao[i-1])
           	chong=piao[i];
       	else if(piao[i]-piao[i-1]!=1)
           	duan=piao[i-1]+1;
   	}
   	printf("%d %d",duan,chong);
   	return 0;
} 
