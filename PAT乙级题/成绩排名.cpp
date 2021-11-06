#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct Stu{
	char name[20];
	char id[20];
	int score;
}stu;
int cmp(const void *a,const void *b){
	stu c = *(stu*)a;
	stu d = *(stu*)b;
	//∞¥≥…º®∏ﬂµÕ≈≈–Ú
	return c.score-d.score; 
}
main(){
	long n;
	stu st[9999];
	scanf("%ld",&n);
	for(long i=0;i<n;i++){
		scanf("%s %s %d",st[i].name,&st[i].id,&st[i].score);
	}
	qsort(st,n,sizeof(st[0]),cmp);
	printf("%s %s\n",st[n-1].name,st[n-1].id);
	printf("%s %s",st[0].name,st[0].id);
}
