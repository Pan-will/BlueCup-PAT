#include<string.h>  
#include<stdio.h>  
#include<stdlib.h>  
#include<iostream>  
#include<vector>  
#include<algorithm>  
using namespace std;  
struct node{  
    int d,c;  
    char name[15];  
};  
bool cmp(node a, node b){  
    if(a.d+a.c!=b.d+b.c){  
        return a.d+a.c>b.d+b.c;  
    }  
    else{  
        if(a.d!=b.d){  
            return a.d>b.d;  
        }  
        else{  
            if(strcmp(a.name,b.name)<0)return 0;  
            else return 1;  
        }  
    }  
}  
int main(){  
    vector<node>v1,v2,v3,v4;  
    int n,l,h,count;  
    node tmp;
    while(scanf("%d%d%d",&n,&l,&h)!=EOF){  
        count=0;  
        for(int i=0;i<n;i++){  
            scanf("%s%d%d",tmp.name,&tmp.d,&tmp.c);  
            if(tmp.d>=l&&tmp.c>=l){  //都及格才有资格被录取 
                count++;//记录被录取数量 
                if(tmp.d>=h && tmp.c>=h){  
                    v1.push_back(tmp);  
                }  
                else if(tmp.d>=h&&tmp.c<h){  
                    v2.push_back(tmp);  
                }  
                else if(tmp.d<h&&tmp.c<h&&tmp.d>=tmp.c){  
                    v3.push_back(tmp);  
                }  
                else{  
                    v4.push_back(tmp);  
                }  
            }  
        }  
        printf("%d\n",count);  
        sort(v1.begin(),v1.end(),cmp);  
        sort(v2.begin(),v2.end(),cmp);  
        sort(v3.begin(),v3.end(),cmp);  
        sort(v4.begin(),v4.end(),cmp);  
        vector<node>::iterator it;  
        for(it=v1.begin();it!=v1.end();it++){  
            printf("%s %d %d\n",it->name,it->d,it->c);  
        }  
//        for(int i=0;i<v1.size();i++){  
//            printf("%s %d %d\n",v1[i].name,v1[i].d,v1[i].c);  
//        } 
        for(int i=0;i<v2.size();i++){  
            printf("%s %d %d\n",v2[i].name,v2[i].d,v2[i].c);  
        }  
        for(int i=0;i<v3.size();i++){  
            printf("%s %d %d\n",v3[i].name,v3[i].d,v3[i].c);  
        }  
        for(int i=0;i<v4.size();i++){  
            printf("%s %d %d\n",v4[i].name,v4[i].d,v4[i].c);
        }  
    }  
    return 0;  
}
