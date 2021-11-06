/*功能：录入n个学生成绩，写入文件中并在屏幕上显示*/
//fprintf()：将数据写入fp指向的文件；
//fscanf()：将数据从fp指向的文件中读出数据； 
/*
5
xiaoyi 1001 66
xiaoer 1002 67
xiaosan 1003 68
xiaosi 1004 69
xiaowu 1005 70
*/
#include<stdio.h>
int main(){
	FILE *fp;
	long num;
	int i,n,score;
	char name[30];
	fp = fopen("bbb.txt","w");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s %ld %d",&name,&num,&score);
		fprintf(fp,"%s %ld %d\n",name,num,score);
	}
	fclose(fp);
	printf("\n刚刚录入的数据为：\n\n"); 
	fp = fopen("bbb.txt","r");
	for(i=0;i<n;i++){
		fscanf(fp,"%s %ld %d",&name,&num,&score);
		printf("%s %ld %d\n",name,num,score);
	}
	fclose(fp);
	return 0;
}
