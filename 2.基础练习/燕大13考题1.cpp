/*
strcmp是字符串比较函数：比较各位字符的ascii码，取值-1，0，1； 
strcat是字符串拼接函数； 
strlen是求字符串长度函数； 
*/
#include<stdio.h> 
#include<string.h>
int main(){
	char s1[20] = "china",s2[20] = "for",s[10];
	if(strcmp(s1,s2))
		printf("%s  %d\n",strcat(s2,s1),strcmp(s2,s1));
	else
		printf("%d\n",strlen(s1));
	return 0;
}
