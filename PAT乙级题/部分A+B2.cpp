#include<stdio.h>
#include<string.h>
#include<math.h>
int show_newnum(char str[],char key){
	int newnum=0;
	int flag = 1;
	int len = strlen(str);
	for(int i=0;i<len;i++){
		if(str[i] == key){
			newnum += flag * (key - 48);
			flag *= 10;
		}
	}
	return newnum;
}
main(){
	char str[2][100];
	char a,b;
	scanf("%s %c %s %c",&str[0],&a,&str[1],&b);
	printf("%d",show_newnum(str[0],a)+show_newnum(str[1],b));
}
