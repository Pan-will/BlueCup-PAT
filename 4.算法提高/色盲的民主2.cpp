#include<stdio.h>
#include<map>
#include<string.h>
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
	int n;
	map<string,int>m;//���� map<string,int>���͵Ķ��� 
	map<string,int>::iterator it,it1;//���������� 
    vector<int>v;
	scanf("%d",&n);
	getchar();
	for(int i=0;i<n;i++){
		char a[21];
		gets(a);
		if(m.count(a)){//��map��a���ֵĴ�����Ϊ0�������ֹ� 
			m[a]++;//����+1 
		}else{
			m.insert(pair<string,int>(a,1));//�������a,����Ϊ1 
		}
	}
	int k=0;
	for(it=m.begin();it!=m.end();++it){//����map 
		v.push_back(it->second);//��ÿ����ɫ��������������v 
	}
	sort(v.begin(),v.end());//������v�������� 
	for(it1=m.begin();it1!=m.end();++it1){
		if(it1->second==v[v.size()-1]){
			cout<<it1->first<<endl;//�ֵ�˳����� 
		}
	}
	return 0;
} 
