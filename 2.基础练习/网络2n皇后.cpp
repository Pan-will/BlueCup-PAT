#include <cstdio>  
#include<iostream>  
using namespace std;  
int chessb[9][9];//�������̳�ʼ״̬  
int b[9];//�׻ʺ�ķ���λ�� i���ǵ�x�� b[i]=x;  
int h[9];//ͬ�ϣ������Ǻ�  
int countn=0;//���㷽����  
  
  
int check(int queen[],int n)//�ж�ͬһ�л������Խ����Ƿ��Ѿ�������  
{  
    int i;  
    for (i = 1; i < n; i++)  
    {  
        int judge=queen[i]-queen[n];  
        if(judge==0||judge==i-n||judge==n-i)  
        {  
            return 0;  
        }  
    }  
    return 1;  
  
  
}  
void bai(int line,int n)  
{  
    int i;  
    if(line==n+1)  
    {  
        countn++;  
    }  
    else  
    {  
        for(i=1; i<=n; i++)  
        {  
            if(chessb[line][i]==1&&i!=h[line])//���Է���  
            {  
                b[line]=i;  
                if(check(b,line))  
                {  
                    bai(line+1,n);  
                }  
            }  
        }  
    }  
  
  
}  
  
  
void hei(int line,int n)//�ڻʺ������  
{  
    int i;  
    if(line==n+1)     //�ڻʺ��������  
    {  
        bai(1,n);    //��ʼ�����׻ʺ�  
    }  
    else  
    {  
        for(i=1; i<=n; i++)  
        {  
            if(chessb[line][i]==1)//���Է���  
            {  
                h[line]=i;  
                if(check(h,line))  
                {  
                    hei(line+1,n);  
                }  
            }  
        }  
  
    }  
}  
  
  
  
  
  
int main()  
{  
    int n,i,j;  
    cin>>n;  
    for (i = 1; i <= n; i++)  
    {  
        for (j = 1; j <= n; j++)  
        {  
            scanf("%d",&chessb[i][j]);  
        }  
        }  
    hei(1,n);  
    cout<<countn;  
    return 0;  
  
}
