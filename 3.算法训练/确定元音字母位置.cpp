#include<stdio.h>
#include<string.h>
main(){  
    char s[500];
    int h=0;
	gets(s);
    int len=strlen(s);
    for(int i=0;i<len;i++,h++){
    	if(s[i]=='A' || s[i]=='E' || s[i]=='I' || s[i]=='O' || s[i]=='U' || s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
    		printf("%d",i+1);
    		break;
		}
	}
	if(h>=len){
		printf("0");
	}
}  
