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
	vector<info>::iterator it;//声明迭代器 
	for(it=con.begin();it!=con.end();it++)
		if(it->name==name)
			break;
	return it;
}
int main(){
	string key,name;
	int score;
	cin>>key;//输入操作符 
	vector<info> con;//创建结构体容器:必须用结构体类名，不能用别名 
	vector<info>::iterator it;//定义迭代器:必须用结构体类名，不能用别名 
	while(key!="end")
	{
		if(key=="insert")
		{
			cin>>tmp.name>>tmp.score;
			it=find(con,tmp.name);//表按姓名在结构体容器con中查找 
			if(it==con.end())//没找到 
				con.push_back(tmp);//将此条结构体数据存进去 
			else if(tmp.score>it->score)//找到了且输入的分数大于之前得分数 
				con.insert(it,tmp);//插入分数高的这条数据 
			else
				con.insert(it+1,tmp);//找到了且分数相等，则再次插入该记录 
		}
		else
		{
			cin>>name;
			it=find(con,name);
			if(it==con.end())//没有找到 
				cout<<-1<<endl;
			else//找到了，输出成绩 
				cout<<it->score<<endl;
		}
		cin>>key;
	}
	return 0;
}


