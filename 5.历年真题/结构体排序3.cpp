#include<stdio.h>
#include<string.h> 
#include<stdlib.h>
#include<math.h>
//#include<ctype.h>
/*定义一个结构体*/
typedef struct Stu{
	char name[100];
	char sex[10];
	int age;
	int score;
}stu;
/*	定义排序(回调)函数cmp： 
		返回类型必须是int;
		两个参数的类型必须都是const void *;另外写成void const *与前面的定义方式完全等价； 
		const修饰的数据类型是指常类型,常类型的变量或对象的值是不能被更新的
		如果是升序,那么就是如果a比b大返回一个正值,小则负值,相等返回0;
*/ 
int cmp(void const *a,void const *b){
	/* *(stu*)a是因为：a是个void *类型，要先
	用(stu*）将它转成stu*类型，然后再用*取值，
	变成stu类型，才能比较大小。*/
	stu c=*(stu*)a;
	stu d=*(stu*)b;
	//按成绩升序排序 
	return c.score-d.score;
}
main(){
	int n;
	stu sz[100];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s %s %d %d",&sz[i].name,&sz[i].sex,&sz[i].age,&sz[i].score);
	}
	/*
	qsort函数详解：用来对数组进行排序的函数； 
		1 待排序数组首地址,通常传入一个数组名； 
		2 数组中待排序元素数量;
		3 各元素的占用空间大小,推荐使用sizeof(s[0])这样,特别是对结构体 ; 
		4 指向函数的指针，用于确定排序的顺序.
	注意：如果要对数组进行部分排序,比如对一个s[n]的数组排列其从s[i]开始的m个元素,只需要
在第一个和第二个参数上进行一些修改:qsort(&s[i],m,sizeof(s[i]),cmp);
	*/
	qsort(sz,n,sizeof(sz[0]),cmp);
	printf("\n按成绩升序为：\n\n");
	for(int i=0;i<n;i++){
		printf("%s %s %d %d\n",sz[i].name,sz[i].sex,sz[i].age,sz[i].score);
	}
}
