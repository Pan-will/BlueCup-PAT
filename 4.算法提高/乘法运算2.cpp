#include<iostream>  
using namespace std;  
int main()  
{  
    int n,m,a[2]={0},b[2]={0};  
    cin>>n>>m;  
    a[0]=n%10;//�����һ�����ĸ�λ   
    a[1]=n/10;//�����һ������ʮλ   
    b[0]=m%10;//   
    b[1]=m/10;//  
    cout<<n<<endl;  
    cout<<"��"<<m<<endl;  
    cout<<"������"<<endl;  
    if(a[1]>0&&b[1]>0)//��λ������λ��  
    {   
      for(int i=0;i<2;i++)  
      {  
        if(n*b[i]==0)  
        cout<<"  00"<<endl;  
        else if(i==0&&n*b[0]!=0)  
        {  
            if(n*b[1]/100!=0)  
            {  
                if(n*b[0]/100!=0&&n*b[1]/100!=0)  
                cout<<" "<<n*b[i]<<endl;  
                else if(n*b[0]/100==0&&n*b[1]!=0)  
                cout<<"  "<<n*b[i]<<endl;  
           }  
           else  
           {  
                if(n*b[0]/100!=0)  
                cout<<n*b[i]<<endl;  
           }  
        }  
        else  
        cout<<n*b[i]<<endl;  
      }  
        cout<<"������"<<endl;  
        cout<<n*m<<endl;  
    }   
    if(a[1]>0&&b[1]==0)//��λ����һλ��   
    {  
      for(int i=0;i<1;i++)  
      {  
        if(n*b[i]==0)  
        cout<<" 00"<<endl;  
        if(n*b[i]!=0&&n*b[i]/100!=0)  
        cout<<n*b[i]<<endl;  
        if(n*b[i]!=0&&n*b[i]/100==0)  
        cout<<" "<<n*b[i]<<endl;  
      }  
    }   
    if(a[1]==0&&b[1]>0)//һλ������λ��  
    {   
         for(int i=0;i<2;i++)  
      {  
        if(n*b[i]==0)  
        cout<<" 00"<<endl;  
        if(n*b[i]!=0&&n*b[i]/100!=0)  
        cout<<n*b[i]<<endl;  
        if(n*b[i]!=0&&n*b[i]/100==0&&n*b[i]/10!=0)  
        cout<<" "<<n*b[i]<<endl;  
        if(n*b[i]!=0&&n*b[i]/100==0&&n*b[i]/10==0)  
        cout<<"  "<<n*b[i]<<endl;  
       }  
        cout<<"������"<<endl;  
        cout<<n*m<<endl;  
     }  
    return 0;  
 }
