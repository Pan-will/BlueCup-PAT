#include<iostream> 
#include<algorithm>
#include<vector>
using namespace std;
int cmp(string a, string b){//�Զ��������� 
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
    vector<string> v(n);//����һ��string���͵�����:v,������СΪn 
    for(int i=0; i<n; i++)
        cin>>v[i];
    sort(v.begin(), v.end(), cmp);//�����Լ������������  
    for(int i=0; i<n; i++)  
        cout<<v[i]<<endl;
    return 0;  
}
