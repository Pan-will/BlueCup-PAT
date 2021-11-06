#include <cstdio>  
#include <string>  
#include <algorithm>  
#include <vector>  
#include <iostream>  
  
using namespace std;  
  
vector<string> ans;  
  
string s[] = { "0", "1", "2", "3", "4", "5", "6", "7", "8", "9" };  
  
string intToString( int n ) {  
    string ans;  
    while( n ) {  
        ans = ans + s[n % 10];  
        n = n / 10;  
    }  
    reverse( ans.begin(), ans.end() );  
  
    return ans;  
}  
  
bool check( string str ) {  
    int visit[10] = { 0 };  
    for( int i = 0; i < str.size(); i++ ) {  
        visit[str[i] - '0']++;  
    }  
    if( visit[0] > 0 ) return false;  
    for( int i = 1; i < 10; i++ ) {  
        if( visit[i] != 1 ) {  
            return false;  
        }  
    }  
    return true;  
}  
  
int main() {  
    for( int i = 1; i < 99999; i++ ) {  
        string str;  
        for( int j = 1; j < 10; j++ ) {  
            str = str + intToString( i * j );  
            if( check( str ) ) {  
                cout << str << endl;  
                break;  
            }  
        }  
    }  
  
    sort( ans.begin(), ans.end() );  
    for( int i = 0; i < ans.size(); i++ ) {  
        cout << ans[i] << endl;  
    }  
    return 0;  
}
