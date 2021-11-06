#include<stdio.h>
#include<map>
#include<vector>
#include<string.h>
#include<iostream>
#include<algorithm>//sort函数头文件 
#include<math.h>
using namespace std;
int main(){
	int n;
	char name[20];
	map<string,int> m;//声明对象 
	map<string,int> :: iterator it1,it2;//声明迭代器
	vector<int>v;
	scanf("%d",&n);
	getchar();//处理回车 
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
	sort(v.begin(),v.end());//排序
	for(it2=m.begin();it2!=m.end();it2++){
		cout<<it2->first<<endl;//按字典排序输出 
	}
	return 0;
}
