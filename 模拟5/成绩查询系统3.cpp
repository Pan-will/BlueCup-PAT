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
定义find函数：
	功能：在容器中按姓名查找是否有相同姓名的记录； 
	参数：结构体类型的容器，字符串类型的姓名； 
	返回值类型：指向某条数据的指针。 
*/
vector<info>::iterator find(vector<info>&stu,string name){
	vector<info>::iterator it;//声明迭代器 
	for(it=stu.begin();it!=stu.end();it++){
		if(it->name==name)
			break;
	}
	return it;//返回的是指向某条数据的指针 
}
int main(){
	string sign,name;
	int score;
	vector<info> inf;//声明结构体类型的容器,用来存放数据 
	cin>>sign;//录入操作符 
	vector<info>::iterator it;//声明迭代器 
	while(sign!="end"){
		if(sign=="insert"){
			cin>>stu.name>>stu.score;//录入 
			it = find(inf,stu.name);//调用函数 
			if(it==inf.end()){
				inf.push_back(stu);
			}else if(it->score<stu.score){//若刚刚输入的成绩大于已存的成绩 
				inf.insert(it,stu);//存放分数高的记录 
			}else{//没有找到，新存一条记录 
				inf.insert(it+1,stu);
			}
		}
		else if(sign=="find"){
			cin>>stu.name;//录入
			it=find(inf,stu.name);//调用函数
			cout<<it->score<<endl;
		}
		else if(sign=="all"){
			for(it=inf.begin();it!=inf.end();it++){
				cout<<it->name<<" "<<it->score<<endl;
			}
		} 
		cin>>sign;//执行完一遍操作，进入下一遍 
	}
	return 0;
}
