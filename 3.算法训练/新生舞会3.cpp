#include<stdio.h>
#include<string.h>
/*����ѧ����Ϣ�Ľṹ��*/ 
typedef struct Student{
	char name[20];
	char num[20];
	char sex;
}stu;
int m,n;
stu st[1010];
/*
strcmp������
	�Ƚ������ַ������������ַ���Ϊstr1,str2:��str1==str2,�򷵻���.
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
���������˵���Ϣx��y:
	ͨ������findbynum��findbyname�����ж����������ܷ��Ϊ���
*/
void solve(){
	scanf("%d",&m);
	char x[20],y[20];
	/*���������˵���Ϣx��y,����x��y����*/
	for(int i=0;i<m;i++){
		scanf("%s%s",x,y);
	
		int judgex,judgey;//��� 
		if(x[0]<=57){//Ϊ���� 
			judgex = findbynum(x);//����Ϊx���� 
		}else{//Ϊ��ĸ 
			judgex = findbyname(x);//����Ϊx����
		}
		
		if(y[0]<=57){//Ϊ���� 
			judgey = findbynum(y);//����Ϊy����
		}else{//Ϊ��ĸ
			judgey = findbyname(y);//����Ϊy����
		}
		
		if(judgex != judgey) printf("Y\n");//��������� 
		else printf("N\n");
	}
}
int main(){
	scanf("%d",&n);
	for(int i=0;i<n;i++){//����N��ѧ������Ϣ
		scanf("%s%s %c",st[i].name,st[i].num,&st[i].sex);
	}
	solve(); 
	return 0;
}
