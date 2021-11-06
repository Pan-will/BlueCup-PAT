#include<stdio.h>
#include<string.h>
#include<math.h>
int show_newnum(char str[],int key){
	int newnum=0;//形成的新数字 
	int flag = 0;//做标记 
	int len = strlen(str);
	for(int i=0;i<len;i++){
		if(str[i]-'0' == key){
			newnum += key * pow(10,flag);
			flag = flag + 1;
		}
	}
	return newnum;
}
int main(){
	char str[2][100];
	int a,b;
	scanf("%s %d %s %d",&str[0],&a,&str[1],&b);
	printf("%d",show_newnum(str[0],a)+show_newnum(str[1],b));
	return 0;
}
