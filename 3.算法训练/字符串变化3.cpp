#include<stdio.h>  
#include<string.h>  
void one(char string[])  
{  
    char *p=string;  
    while(*p)  
    {  
        if(*p>='a' && *p<='z')  
        {  
            *p-=32;  
        }  
        p++;  
    }  
}  
void two(char string[])  
{  
    char *p=string;  
    while(*p)  
    {  
        if(*p>='A' && *p<='Z')
        {  
            *p+=32;  
        }  
        p++;  
    }  
}  
void three(char string[])  
{  
    int len=strlen(string);  
    int j,i;  
    char arr[250];  
    strcpy(arr,string);  
    for(i=0,j=len-1;i<=len-1 && j>=0;i++,j--)  
    {  
        string[i]=arr[j];  
    }  
    string[i]='\0';  
}  
void four(char string[])  
{  
    char *p=string;  
    while(*p)  
    {  
        if(*p>='A' && *p<='Z')  
        {  
            *p+=32;  
        }  
        else  
        {  
            *p-=32;  
        }  
        p++;  
    }  
}  
void five(char string[])  
{  
    int i=0,j;  
    while(string[i])  
    {  
        printf("%c",string[i]);  
        if(string[i+1]==string[i]+1 && string[i+2]==string[i+1]+1)  
        {  
            printf("-");  
            for(i=i+3;;i++)                 //不能加string[i]，不然在句末的会出错 （三个连续的）   
            {  
                if(string[i]!=string[i-1]+1)  
                {  
                    printf("%c",string[i-1]);  
                    break;  
                }  
            }     
            i--;  
        }  
        i++;  
    }  
    printf("\n");  
}  
int main()  
{  
    int n;  
    char string[250];  
    scanf("%d%s",&n,string);  
    switch(n)  
    {  
        case 1: one(string); break;  
        case 2: two(string); break;  
        case 3: three(string); break;  
        case 4: four(string); break;  
        case 5: two(string); five(string); break;  
    }  
    if(n!=5)  
    {  
        puts(string);  
    }  
    return 0;  
} 
