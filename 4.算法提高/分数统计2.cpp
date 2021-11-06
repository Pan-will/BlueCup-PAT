#include <algorithm>  
#include <iostream>  
#include <string.h>  
int num[1005];  
using namespace std;  
int main()  
{  
    int n,i = 0,sum;  
    int temp[5][1005],dp[5] = {90,80,70,60,0};  
    memset(temp,0,sizeof(temp));  
    cin>>sum;  
    for(;i < sum;i++)  
    {  
        cin>>num[i];  
        for(int j = 0;j < 5;j++)  
        {  
            if(num[i] >= dp[j])  
            {  
                temp[j][++temp[j][0]] = num[i];  
                break; 
            }  
        }  
    }  
    int maxn = 0,maxl = 0;  
    for(int t = 0;t < 5;t++)  
    {  
        cout<<temp[t][0]<<" ";//输出每个等级的人数 
        if(maxn < temp[t][0])  
        {  
            maxn = temp[t][0];  
            maxl = t;  
        }  
    }  
    cout<<endl<<maxn<<endl;  
    sort(temp[maxl]+1,temp[maxl]+temp[maxl][0]+1);  
    for(int t = temp[maxl][0];t >= 1;t--)  
        cout<<temp[maxl][t]<<" ";  
    return 0;  
} 
