#include<ctype.h>
#include<stdio.h>
#include<string.h>
int main(){
	char ch[27]="absdefghijklmnopqrstuvwxyz";
    char s[1000];
    gets(s);
    int a[27]={0};
    for(int i=0;i<strlen(s);i++)
    {
        s[i]=tolower(s[i]);
        if(s[i]>='a' && s[i]<='z')
            a[s[i]-97]++;
    }
    int maxx=0,k;
    for(int i=0;i<27;i++){
        if(maxx<a[i]){
            maxx=a[i];
            k=i;
        }
    }
    printf("%c %d",ch[k],maxx);
    return 0;
}
