#include<stdio.h>
#include<string.h>
/*定义学生信息的结构体*/ 
typedef struct Student{
	char name[20];
	char num[20];
	char sex;
}stu;
int m,n;
stu st[1010];
/*
strcmp函数：
	比较两个字符串设这两个字符串为str1,str2:若str1==str2,则返回零.
*/ 
int findbynum(char num[]){
	for(int i=0;i<n;i++){
		if(strcmp(st[i].num,num)==0){
			if(st[i].sex == 'M') return 1;
			else return 0;
		}
	}
}
int findbyname(char name[]){
	for(int i=0;i<n;i++){
		if(strcmp(st[i].name,name)==0){
			if(st[i].sex == 'M') return 1;
			else return 0;
		}
	}
}
/*
输入两个人的信息x、y:
	通过调用findbynum、findbyname函数判断这两个人能否成为舞伴
*/
void solve(){
	scanf("%d",&m);
	char x[20],y[20];
	/*输入两个人的信息x、y,先用x、y保存*/
	for(int i=0;i<m;i++){
		scanf("%s%s",x,y);
	
		int judgex,judgey;//标记 
		if(x[0]<=57){//为数字 
			judgex = findbynum(x);//参数为x数组 
		}else{//为字母 
			judgex = findbyname(x);//参数为x数组
		}
		
		if(y[0]<=57){//为数字 
			judgey = findbynum(y);//参数为y数组
		}else{//为字母
			judgey = findbyname(y);//参数为y数组
		}
		
		if(judgex != judgey) printf("Y\n");//若不能配对 
		else printf("N\n");
	}
}
int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){//输入N个学生的信息
		scanf("%s%s %c",st[i].name,st[i].num,&st[i].sex);
	}
	solve(); 
	return 0;
}
