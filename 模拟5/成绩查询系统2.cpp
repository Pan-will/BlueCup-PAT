#include<stdio.h>
#include<map>
#include<vector>
#include<string.h>
#include<iostream>
#include<algorithm>//sort����ͷ�ļ� 
#include<math.h>
using namespace std;
int main(){
	int n;
	char name[20];
	map<string,int> m;//�������� 
	map<string,int> :: iterator it1,it2;//����������
	vector<int>v;
	scanf("%d",&n);
	getchar();//����س� 
	for(int i=0;i<n;i++){
		gets(name);
		if(m.count(name)){
			m[name]++;
		}else{
			m.insert(pair<string,int>(name,1));
		}
	}
	for(it1=m.begin();it1!=m.end();it1++){
		v.push_back(it1->second);
	}
	sort(v.begin(),v.end());//����
	for(it2=m.begin();it2!=m.end();it2++){
		cout<<it2->first<<endl;//���ֵ�������� 
	}
	return 0;
}
