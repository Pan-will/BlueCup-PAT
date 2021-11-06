#include<map>
#include<math.h>
#include<iostream>
using namespace std;
int main(){
	map<string,int> m;
	string sign,name;
	int score;
	while(1){
		cin>>sign;
		if(sign=="end"){
			break;
		}
		else if(sign=="insert"){
			cin>>name>>score;
			if(score>m[name]){
				m[name] = score;
			}
		}
		else if(sign=="find"){
			cin>>name;
			if(m[name]==0){
				cout<<"-1"<<endl;
			}else{
				cout<<m[name]<<endl;
			}
		}
	}
	return 0;
}
