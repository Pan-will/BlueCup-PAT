#include<cstdio>
#include<cstring>
#include<string>
#include<iostream>
#include<algorithm>
using namespace std;
/*自定义字符串截取函数*/
char* substring(char* ch,int pos,int length)  
{  
    char* pch=ch;//定义一个字符指针，指向传递进来的ch地址。  
    char* subch=(char*)calloc(sizeof(char),length+1);//通过calloc来分配一个length长度的字符数组，返回的是字符指针。  
    int i;//只有在C99下for循环中才可以声明变量，这里写在外面，提高兼容性。  
    pch=pch+pos;//是pch指针指向pos位置。  
    for(i=0;i<length;i++){  
        subch[i]=*(pch++);//循环遍历赋值数组。  
    }  
    subch[length]='\0';//加上字符串结束符。  
    return subch;      //返回分配的字符数组地址。  
} 
int main()
{
    int l, maxn, cnt;
    string s, s1, s2, ans;
    scanf("%d", &l);
        cin >> s;
        int len = s.length();
        maxn = cnt = 0;

        for(int i = l; i <= len; i++){
            for(int j = 0; j + i <= len; j++){
                cnt = 0;
                s1 = s.substr(j, i);
                for(int k = 0; k+i <= len; k++){
                    s2 = s.substr(k, i);
                    if(s1 == s2)
                        cnt++;
                }
                if(cnt > maxn){
                    ans = s1;
                    maxn = cnt;
                }
                else if(cnt == maxn && s1.length() > ans.length()){
                    ans = s1;
                }
            }
        }
        cout << ans << endl;
    
    return 0;
}
