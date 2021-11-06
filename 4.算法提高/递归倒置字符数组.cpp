#include<stdio.h>
void daozhi(int begin,int end,char s[]){
	if(begin>=end) return;
	else{
		char temp;
		temp = s[begin];
		s[begin] = s[end];
		s[end] = temp;
		printf("%s\n",s);
		daozhi(begin+1,end-1,s);
	}
}
int main(){
	int len;
	char s[10000];
	scanf("%d%s",&len,&s);
	daozhi(0,len-1,s);
	for(int i=0;i<len;i++){
		printf("%c",s[i]);
	}
	return 0;
}
