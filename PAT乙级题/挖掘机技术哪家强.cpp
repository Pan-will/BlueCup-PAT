#include<stdio.h>
#include<stdlib.h>
typedef struct student{
	int sid;
	int score;
}stu;
int cmp(const void *c,const void *d){
	stu a = *(stu*)c;
	stu b = *(stu*)d;
	return b.score-a.score;
}
int main(){
	int n;
	scanf("%d",&n);
	stu students[n];
	for(int i=0;i<n;i++){
		scanf("%d %d",&students[i].sid,&students[i].score);
		
	}
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			if(students[i].sid == students[j].sid){
				students[i].score += students[j].score;
				students[j].sid=0;
				students[j].score=0;
			}
		}
	}
	int num = 0;
	for(int i=0;i<n;i++){
		if(students[i].sid==0){
			num = i;
			break;
		}
	}
//	printf("合并后的结构体为：\n");
//	for(int i=0;i<n;i++){
//		printf("%d %d\n",students[i].sid,students[i].score);
//	}
	qsort(students,num,sizeof(students[0]),cmp);
	printf("%d %d",students[0].sid,students[0].score);
	return 0;
}
