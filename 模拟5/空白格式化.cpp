/**p_to<*p_from*/
#include<stdio.h>
#include<string.h>
void f(char* from, char* to){
	char* p_from = from;//¶¨Òå×Ö·ûÖ¸Õë
	char* p_to = to;
	while(*p_from==' ' || *p_from=='\t' || *p_from=='\n')
		p_from++;
	do{
		if(*p_from==' ' || *p_from=='\t' || *p_from=='\n'){ 
			do{
				p_from++;
			}while(*p_from==' ' || *p_from=='\t' || *p_from=='\n');
			if(*p_to<*p_from)
				*p_to++ = ' ';
		}
	}while(*p_to++ = *p_from++);
}
int main(){
	char str[5000];
	gets(str);
	int len = strlen(str);
	f(str,str);
	printf("%s",str);
	return 0;
}
