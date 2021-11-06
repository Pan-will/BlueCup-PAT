#include<iostream>
#include<algorithm>  
#define MAX 999999
using namespace std;
void quanpai(string str){//全排列函数 
	int count;//统计有多少排列
	int str[MAX];//放全排列 
	int len = str.length();
    sort(str.begin(), str.end());
    do{
    	count++;
    	cout<<str<<endl;
    }while(next_permutation(str.begin(), str.end()));  
}
void solve(string str){
	char *p0=str0;
	char *p1=quanpai(str);
	
}
int main() {
	int n;
	string str0;
	
	cin>>str;
    
    return 0;
}
