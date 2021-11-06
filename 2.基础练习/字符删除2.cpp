#include<stdio.h>
#include<string.h>
int main(){
	char a[30];
	int i,j,m=0;
	char ch;
    gets(a);
    int len = strlen(a);
    scanf("%s",&ch);
    for(i=0;i<len-m;i++)//i<=9---->i<9-m
    {
        if(a[i]==ch)
        {
            for(;i<=len-1-m;i++)
            {
                a[i]=a[i+1];
            }
            m++;
            i=i+1;
        }
        else
            i++;
    }
    printf("%s",a);
    return 0;
}
