#include <iostream>
#include <vector>
#include <string>
using namespace std;
struct info
{
	string name;
	int score;
}tmp;
vector<info>::iterator find(vector<info>&con,string name)
{
	vector<info>::iterator it;//���������� 
	for(it=con.begin();it!=con.end();it++)
		if(it->name==name)
			break;
	return it;
}
int main(){
	string key,name;
	int score;
	cin>>key;//��������� 
	vector<info> con;//�����ṹ������:�����ýṹ�������������ñ��� 
	vector<info>::iterator it;//���������:�����ýṹ�������������ñ��� 
	while(key!="end")
	{
		if(key=="insert")
		{
			cin>>tmp.name>>tmp.score;
			it=find(con,tmp.name);//�������ڽṹ������con�в��� 
			if(it==con.end())//û�ҵ� 
				con.push_back(tmp);//�������ṹ�����ݴ��ȥ 
			else if(tmp.score>it->score)//�ҵ���������ķ�������֮ǰ�÷��� 
				con.insert(it,tmp);//��������ߵ��������� 
			else
				con.insert(it+1,tmp);//�ҵ����ҷ�����ȣ����ٴβ���ü�¼ 
		}
		else
		{
			cin>>name;
			it=find(con,name);
			if(it==con.end())//û���ҵ� 
				cout<<-1<<endl;
			else//�ҵ��ˣ�����ɼ� 
				cout<<it->score<<endl;
		}
		cin>>key;
	}
	return 0;
}


