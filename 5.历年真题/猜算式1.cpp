/*
����˼·��
		����Ϊ�����⣬���˷�ʽ���е��ĸ�����a,b,c,d��ʾ��
	���ĸ���һ����λ��ÿλ��1-9��Ÿ����е�һ��������ÿȷ
	��һ����dfs�ŴΣ�ÿ�ν�1-9��Ÿ�������̽һ�£�����¼a,b,c,d�ľ���ֵ��
	��¼��ʽΪid=1����ʾa��ʮλ��id=2����ʾ��λ���Դ����ơ�
	
	ע�⣺ÿ��dfs����Ҫ�ѷ��ʱ�������Լ�a,b,c,d,��ԭΪǰ���״̬��
*/ 
#include<stdio.h>
#include<string.h>
int a,b,c,d;//a*b=c*d
bool visit[10];//���ʱ�����飬���Ƿ��Ѿ����� 
bool com[10000];//�ж�a��b�Ļ��Ƿ���ֹ�
void dfs(int id)//id��ʾ�����Ǹ�������һλ
{  
    if(id==10)//һ������¼��ɣ��ж��Ƿ���ʵ��a*b=c*d
    {  
        if(a*b==c*d && com[a*b]==0)  
        {
        	printf("%2d*%2d = %2d*%3d\n",a,b,c,d);
            com[a*b]=1;  
        }  
        else  
            return;  
    }  
    for(int i=1; i<=9; i++){  
        if(visit[i]==0){  
            if(id==1)  
                a=i*10;  
            if(id==2)  
                a+=i;  
            if(id==3)  
                b=i*10;  
            if(id==4)  
                b+=i;  
            if(id==5)  
                c=i*10;  
            if(id==6)  
                c+=i;  
            if(id==7)  
                d=i*100;  
            if(id==8)  
                d+=i*10;  
            if(id==9)  
                d+=i; 
				 
            visit[i]=1;
            dfs(id+1);
            visit[i]=0; 
			 
            if(id==2)  
                a-=i;  
            if(id==4)  
                b-=i;  
            if(id==6)  
                c-=i;  
            if(id==8)  
                d-=i*10;  
            if(id==9)  
                d-=i;
        }  
    }  
}  
int main(){  
    memset(visit,0,sizeof(visit));  
    memset(com,0,sizeof(com));  
    dfs(1);
	return 0; 
}
