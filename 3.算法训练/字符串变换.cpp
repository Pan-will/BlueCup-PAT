#include<stdio.h>
#include<ctype.h>
#include<string.h>
void n1(char s[],int len){
	for(int i = 0; i < len; i++) {
		s[i] = toupper(s[i]);
	}
	printf("%s",s);
}
void n2(char s[],int len){
	for(int i = 0; i < len; i++) {
		s[i] = tolower(s[i]);
	}
	printf("%s",s);
}
void n3(char s[],int len){
	for(int i = len-1; i >= 0; i--) {
    	printf("%c",s[i]);
    }
}
void n4(char s[],int len){
	for(int i = 0; i < len; i++) {
        if(isupper(s[i]))
            s[i] = tolower(s[i]);
        else
            s[i] = toupper(s[i]);
    }
    printf("%s",s);
}
void n5(char s[],int len) {
	for(int i = 0; i < len; i++) {
		s[i] = tolower(s[i]);//ȫ��ת��ΪСд��ĸ
	}
	int i=0,j;
	while(s[i]){
		printf("%c",s[i]);
		if(s[i+1]==s[i]+1 && s[i+2]==s[i+1]+1){
			printf("-");
			for(i=i+3;;i++){
				if(s[i]!=s[i-1]+1){
					printf("%c",s[i-1]);
					break;
				}
			}
			i--;
		}
		i++;
	}
	printf("\n");
}
int main() {
    int n;
    scanf("%d",&n);
    char s[200];
    gets(s);
    int len = strlen(s);
    switch(n) {
        case 1://ȫ��ת��Ϊ��д��ĸ
        	n1(s,len);
        	break;
        case 2://ȫ��ת��ΪСд��ĸ
        	n2(s,len);
            break;
        case 4:
            n4(s,len);
            break;
        case 3:
            n3(s,len);
            break;
        case 5:
        	n5(s,len);
            break;
    }
    return 0;
}

