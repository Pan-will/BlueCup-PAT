#include<iostream>
#include<cstdio>
#define N 1000000007
using namespace std;

int data[4]={1,1,1,1};
int dfs2(int n,int* num,int u);
int count = 0;
int temp[100]={0};

int dfs1(int n,int u)
{
    if (n>u) {
        return 0;
    }
    
    if (n==u) {
        dfs2(0,data,u+4);
    }
    else {
        for(int i=0;i<4;i++) {
            data[i]++;
            dfs1(n+1,u);
            data[i]--;
        }
    }
}

int dfs2(int n,int* num,int u)
{
    if (n>u) {
        return 0;
    }
     
    if (n==u) {
        count=count%N;
        count++;
        for(int i=0;i<n;i++)
        cout<<temp[i]<<" ";
        cout<<endl;
    } 
    else {
        for (int i=0;i<4;i++) {
            if (i==1 && num[0]>0) {
                continue;
            }
            
            if (i==3 && num[2]>0) {
                continue;
            }
            
            if (i==0 && n==0)
                continue;
                
            if (num[i]>0) {
                num[i]--;
                temp[n]=i;
                dfs2(n+1,num,u);
                num[i]++;
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    dfs1(0,n-4);
    cout << count;
} 

