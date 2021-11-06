#include<iostream>
#include<algorithm>
#include<stdio.h>  
#include<string.h>
#include<string>
using namespace std; 
int main()  
{  
    int l,a[61][61];  
    scanf("%d",&l);
    char s[61],s1,s2;  
    scanf("%s",&s);  
    int len=strlen(s);  
    for(int k=l;k<=len;k++)     /*字符的长度*/  
    {  
        for(int i=0;i<=len-k;i++)   /*字符的所有的可能*/  
        {  
            int c=1;
            s1=s.substr(i,k);  
            for(int j=i+1;j<=len-k;j++)    /*需要比较的字符*/  
            {  
                s2=s.substr(j,k);  
                if(s1==s2)  
                {  
                    c++;  
                }  
            }  
            a[k][i]=c;  
        }  
    }  
  
    /*a[k][i]：从s[i]的长度为k的字符 的个数*/  
    int x=l,y=0;  
    for(int k=l;k<=len;k++)  
    {  
        for(int i=0;i<=len-k;i++)  
        {  
            if(a[k][i]>=a[x][y] ) /*找出个数最多的字符*/  
            {  
                if(a[k][i]>a[x][y])  
                {  
                    x=k;  
                    y=i;  
                }  
                else if(a[k][i]==a[x][y]) /*如果个数相同，那么选择长度大的*/  
                {  
                    if(k>x)  
                    {  
                        x=k;  
                        y=i;  
                    }  
                }  
            }  
        }  
    }  
    cout<<s.substr(y,x)<<endl;  
  
    return 0;  
}
