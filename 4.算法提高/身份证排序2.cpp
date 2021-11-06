#include<iostream> 
#include<algorithm>
#include<vector>
using namespace std;
int cmp(string a, string b){//自定义排序函数 
    string bira = a.substr(6, 8);  
    string birb = b.substr(6, 8);  
    if(bira != birb)  
        return bira > birb; 
    else  
        return a > b;
    return 0;  
}  
int main(){  
    int n;  
    scanf("%d",&n);  
    vector<string> v(n);//定义一个string类型的容器:v,容器大小为n 
    for(int i=0; i<n; i++)
        cin>>v[i];
    sort(v.begin(), v.end(), cmp);//调用自己定义的排序函数  
    for(int i=0; i<n; i++)  
        cout<<v[i]<<endl;
    return 0;  
}
