#include<iostream> 
#include<algorithm>  
using namespace std;
int main() {
	string str;
	int count=0;
	cin>>str;
    int len = str.length();
    sort(str.begin(), str.end());
    do{
    	count++;
    	cout<<str<<endl;
    }while(next_permutation(str.begin(), str.end()));  
    cout<<count;
	return 0;
}
