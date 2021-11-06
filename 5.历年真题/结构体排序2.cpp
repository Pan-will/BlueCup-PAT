#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/*定义一个结构体*/
typedef struct Stu{
	char name[10];
	int id;
	int score;
}stu;
/*	定义排序(回调)函数cmp： 
		返回类型必须是int;
		两个参数的类型必须都是const void *;
		如果是升序,那么就是如果a比b大返回一个正值,小则负值,相等返回0;
*/ 
int cmp(const void *a,const void *b){
	/* *(stu*)a是因为：a是个void *类型，要先
	用(stu*）将它转成stu*类型，然后再用*取值，
	变成stu类型，才能比较大小。*/
	stu c = *(stu*)a;
	stu d = *(stu*)b;
	//按成绩高低排序
//	return c.score-d.score; 
	//按姓名字符进行字典排序 
	if(strcmp(c.name,d.name)>0){
		return strcmp(c.name,d.name);
	}
	else{
		if(strcmp(c.name,d.name)==0){
			return c.id-d.id;
		}
	}
}
main(){
	int n;
	stu st[10];//声明一个结构体数组 
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s %d %d",st[i].name,&st[i].id,&st[i].score);
	}
	/*
	qsort函数参数： 
		1 待排序数组首地址;
		2 数组中待排序元素数量;
		3 各元素的占用空间大小,推荐使用sizeof(s[0])这样,特别是对结构体 ; 
		4 指向函数的指针，用于确定排序的顺序.
		5 如果要对数组进行部分排序,比如对一个s[n]的数组排列其从s[i]开始的m个元素,只需要
在第一个和第二个参数上进行一些修改:qsort(&s[i],m,sizeof(s[i]),cmp);
	*/
	qsort(st,n,sizeof(st[0]),cmp);
//	printf("\n\n按成绩，升序为：\n\n");
	for(int i=0;i<n;i++){
		printf("%s %d %d\n",st[i].name,st[i].id,st[i].score);
	}
}
