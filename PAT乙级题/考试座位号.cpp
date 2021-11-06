#include<stdio.h>
typedef struct Student{
	char sid[14];
	int shiji;
	int shizuo;
}Stu;
int main(){
	int n,m;
	scanf("%d",&n);
	Stu stu[n];
	for(int i=0;i<n;i++){
		scanf("%s %d %d",&stu[i].sid,&stu[i].shiji,&stu[i].shizuo);
	}
	scanf("%d",&m);
	int check;
	for(int i=0;i<m;i++){
		scanf("%d",&check);
		for(int j=0;j<n;j++){
			if(check == stu[j].shiji)
				printf("%s %d\n",stu[j].sid,stu[j].shizuo);
		}
	}
	return 0;
}
