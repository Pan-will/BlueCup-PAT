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
    for(int k=l;k<=len;k++)     /*�ַ��ĳ���*/  
    {  
        for(int i=0;i<=len-k;i++)   /*�ַ������еĿ���*/  
        {  
            int c=1;
            s1=s.substr(i,k);  
            for(int j=i+1;j<=len-k;j++)    /*��Ҫ�Ƚϵ��ַ�*/  
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
  
    /*a[k][i]����s[i]�ĳ���Ϊk���ַ� �ĸ���*/  
    int x=l,y=0;  
    for(int k=l;k<=len;k++)  
    {  
        for(int i=0;i<=len-k;i++)  
        {  
            if(a[k][i]>=a[x][y] ) /*�ҳ����������ַ�*/  
            {  
                if(a[k][i]>a[x][y])  
                {  
                    x=k;  
                    y=i;  
                }  
                else if(a[k][i]==a[x][y]) /*���������ͬ����ôѡ�񳤶ȴ��*/  
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
