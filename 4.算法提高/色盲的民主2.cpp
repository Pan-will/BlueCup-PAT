#include<stdio.h>
#include<map>
#include<string.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int n;
	map<string,int>m;//声明 map<string,int>类型的对象 
	map<string,int>::iterator it,it1;//声明迭代器 
    vector<int>v;
	scanf("%d",&n);
	getchar();
	for(int i=0;i<n;i++){
		char a[21];
		gets(a);
		if(m.count(a)){//若map中a出现的次数不为0，即出现过 
			m[a]++;//数量+1 
		}else{
			m.insert(pair<string,int>(a,1));//否则插入a,数量为1 
		}
	}
	int k=0;
	for(it=m.begin();it!=m.end();++it){//遍历map 
		v.push_back(it->second);//将每种颜色的数量赋给容器v 
	}
	sort(v.begin(),v.end());//对容器v进行排序 
	for(it1=m.begin();it1!=m.end();++it1){
		if(it1->second==v[v.size()-1]){
			cout<<it1->first<<endl;//字典顺序输出 
		}
	}
	return 0;
} 
