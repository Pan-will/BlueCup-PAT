#include<stdio.h>
#include<vector>
#include<string>
#include<iostream>
#include<math.h>
using namespace std;
struct info{
	string name;
	int score;
}stu;
/*
����find������
	���ܣ��������а����������Ƿ�����ͬ�����ļ�¼�� 
	�������ṹ�����͵��������ַ������͵������� 
	����ֵ���ͣ�ָ��ĳ�����ݵ�ָ�롣 
*/
vector<info>::iterator find(vector<info>&stu,string name){
	vector<info>::iterator it;//���������� 
	for(it=stu.begin();it!=stu.end();it++){
		if(it->name==name)
			break;
	}
	return it;//���ص���ָ��ĳ�����ݵ�ָ�� 
}
int main(){
	string sign,name;
	int score;
	vector<info> inf;//�����ṹ�����͵�����,����������� 
	cin>>sign;//¼������� 
	vector<info>::iterator it;//���������� 
	while(sign!="end"){
		if(sign=="insert"){
			cin>>stu.name>>stu.score;//¼�� 
			it = find(inf,stu.name);//���ú��� 
			if(it==inf.end()){
				inf.push_back(stu);
			}else if(it->score<stu.score){//���ո�����ĳɼ������Ѵ�ĳɼ� 
				inf.insert(it,stu);//��ŷ����ߵļ�¼ 
			}else{//û���ҵ����´�һ����¼ 
				inf.insert(it+1,stu);
			}
		}
		else if(sign=="find"){
			cin>>stu.name;//¼��
			it=find(inf,stu.name);//���ú���
			cout<<it->score<<endl;
		}
		else if(sign=="all"){
			for(it=inf.begin();it!=inf.end();it++){
				cout<<it->name<<" "<<it->score<<endl;
			}
		} 
		cin>>sign;//ִ����һ�������������һ�� 
	}
	return 0;
}
