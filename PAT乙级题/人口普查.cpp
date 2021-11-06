#include<stdio.h> 
#include<stdlib.h>
#include<string.h>
typedef struct Person{
	char name[10];
	int year,month,day;
}pers;

int cmp(const void *c,const void *d){
	pers a = *(pers*)c;
	pers b = *(pers*)d;
	if((a.year == b.year) && (a.month == b.month)){
		return a.day - b.day;
	}else if(a.year == b.year){
		return a.month - b.month;
	}else{
		return a.year - b.year; 
	}
}

int main(){
	long n;
	long num = 0;//记录有效生日的个数,初值为0 
	scanf("%d",&n);
	pers per[n];//定义结构体数组 
	char str[10];//临时放置姓名 
	int y,m,d;//临时放置生日 
	while(n){
		scanf("%s %d/%d/%d",&str,&y,&m,&d);
		if((y==1814 && m==9 && d>=6) || (y==1814 && m>9) || y>1814){
			if((y==2014 && m==9 && d<=6) || (y==2014 && m<9) || y<2014){
				strcpy(per[num].name,str);
				per[num].year = y;
				per[num].month = m;
				per[num].day = d;
				num += 1;
			}
		}
		n--;
	}
	if(num == 0){
		printf("0");
		return 0;
	}
	qsort(per,num,sizeof(per[0]),cmp);
	printf("%ld %s %s",num,per[0].name,per[num-1].name);
	return 0;
}
